#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0 ;i < t;i++){
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n; j++){
            cin >> v[j];
        }
        int res = 0,c=0;
        for(int j = 0; j < n; j++){
            if(v[j] == 0){
                c++;
            }
            else{
                res = max(res,c);
                c=0;
            }
        }
        res = max(res,c);
        cout << res << endl;
    }
}