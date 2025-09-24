#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        int sum = 0;
        for(int i = 0 ; i < n;i++){
            cin >> v[i];
            sum+=v[i];
        }
        if(sum % 3 != 0){
            cout << 0 << " " << 0;
        }
        else{
            cout << 1 << " " << 2;
        }

    }    
}