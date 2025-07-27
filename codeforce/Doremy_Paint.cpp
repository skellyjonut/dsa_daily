#include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        map<int,int> up;
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n;j++){
            cin >> v[j];
        }
        for(auto i:v){
            up[i]++;
        }
        if(up.size() >=3){
            cout << "NO" << endl;
        }
        else if(up.size() == 1){
          cout << "YES" << endl; 
        }
        else{
            auto it = up.begin();
            long long v1 = it->second;
            it++;
            long long v2 = it->second;
            if(v1 == v2){
                cout << "YES" << endl;
            }
            else if(n%2==1 && abs(v2 - v1) == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}
