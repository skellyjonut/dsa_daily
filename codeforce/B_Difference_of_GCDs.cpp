#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        vector<int> ans;
        ll l,r,n;
        cin >> n >> l >> r;
        bool cond = true;
        for(int i = 1; i <= n; i++){
            ll temp = (l+i-1)/i * i;
            if(temp > r){
                cout << "NO" << "\n";
                cond = false;
                break;
            } 
            else{
                ans.push_back(temp);
            }
        }
        if(cond){
            cout << "YES" << "\n";
            for(auto i: ans){
                cout << i << " " ;
            }
            cout << "\n";
        }
    }

    return 0;
}