#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n;i++ ){
            cin >> v[i];
        }
        int l = 0,r=n-1;
        bool flag = true;
        for(int i = 1; i <= n; i++){
            if(v[l] == i)l++;
            else if(v[r] == i)r--;
            else{
                cout << "NO" <<"\n";
                flag = false;
                break;
            }
        }
        if(flag)cout << "YES" << "\n";
    }
}