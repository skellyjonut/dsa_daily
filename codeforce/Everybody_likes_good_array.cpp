#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(int i =0; i < n;i++){
            cin >> v[i] ;
        }
        int res = 0;
        for(int i = 1;i < n;i++){
            if((v[i-1]%2 == 0 && v[i]%2 == 0) || (v[i]%2 == 1 && v[i-1]%2 == 1)){
                res++;
            }
        }
        cout << res << endl;
    }
}