#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    vector<int> freq(26,0);
    for(char c: s){
        freq[c-'A']++;
    }   
    int c =0;
    int ind = -1;
    for(int i = 0; i < 26;i++){
        if(freq[i]%2 == 1){
            c++;
            ind = i;
        }
    }
    string temp="";
    string res = "";
    if((n%2 == 0 && c == 0) || (n%2 == 1 && c==1)){
        for(int i = 0 ; i < 26;i++){
            temp = temp + string(freq[i]/2,'A'+i);
        }
        res = temp;
        if(c == 1){
            res+=('A'+ind);
        }
        reverse(temp.begin(),temp.end());
        res+=temp;
        cout << res;
    }
    else{
        cout << "NO SOLUTION";
    }

}