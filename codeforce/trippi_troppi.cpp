#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    vector<string> v;
    for(int i = 0; i < n; i++){
        getline(cin,s);
        string r = "";
        r=r+s[0];
        for(int i = 0; i < s.length();i++){
            if(s[i]==' '){
                r=r+s[i+1];
            }
        }
        v.push_back(r);
    }
    for(auto i:v){
        cout << i << endl;
    }
}
