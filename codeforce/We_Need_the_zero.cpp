#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,res;
    cin >> t;

    for(int i =0; i < t;i++){
        cin >> n;
        vector<int> v(n);
        for(int j = 0 ; j < n;j++){
            cin >> v[j];
        }

        if(n%2 == 0){
            res = v[0] ^ v[1];
            for(int k = 2 ; k < n ; k++){
                res = res ^ v[k];
            }
            if(res == 0){
                cout << 0 << endl;
            }
            else{
                cout << -1 << endl;
            }

        }
        else{
            res = v[0];
            for(int l = 1; l < n; l++){
                res=res^v[l];
            }
            cout << res << endl;
        }

    }
}