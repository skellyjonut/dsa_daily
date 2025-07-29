#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        string s;
        string f;
        int r = 0;
        int v,vv;
        bool notFound = true;
        cin >> v >> vv;
        cin >> s >> f;
        for(int j = 0; j  < 7; j++){
            if(s.find(f) != string::npos){
                cout << r << endl;
                notFound = false;
                break;
            }
            else{
                s=s+s;
                r++;
            }
        }
        if(notFound){
            cout << -1 << endl;
        }
          
    }
}