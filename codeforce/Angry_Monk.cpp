#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n,k;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        cin >> n >> k;
        vector<int> v(k);
        for(int j = 0 ; j < k;j++){
            cin >> v[j];
        }
        int res = 0;
        sort(v.begin(),v.end());
        for(int l = 0;l<k-1;l++){
            if(v[l] == 1){
                res++;
            }
            else{
                res=res+(v[l]-1)+(v[l]);
            }
        }
        cout << res << endl;
    }
}