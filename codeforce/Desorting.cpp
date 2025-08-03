#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j<n;j++){
            cin >> v[j];
        }
        int smol = INT_MAX;
        for(int j = 1 ; j < n; j++){
            smol = min(smol,v[j]-v[j-1]);
        }
        if(smol < 0){
            cout << 0 << endl;
        }
        else{
            if(smol%2 == 0){
                cout << (smol/2) + 1 << endl;
            }
            else{
                cout << (smol/2) + 1 << endl;
            }
        }

    }
}