#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,a;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a;
        vector<int> v(a);
        for(int j = 0; j < a; j++){
            cin >> v[j];
        }
        int e=0,o=0;
        for(auto i:v){
            if(i%2 == 0){
                e=1;
            }
            else{
                o++;
            }
        }
        if(o%2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}