#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,p;
    vector<int> v;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        cin >>p >> s;
        int c=0,r=0,m=0;
        for(auto i:s){
            if(i == '.'){
                c++;
                r++;
            }
            else{
                if(c>=3){
                    v.push_back(2);
                    m=1;
                    break;
                }
                else{
                    c=0;
                }
            }
        }
        if(m == 0 && c >=3){
        v.push_back(2);
        }
        else if(m == 0){
          v.push_back(r);
        }
        else{
          continue;
        }
    }
    for(int i:v){
        cout << i << endl;
    }
}