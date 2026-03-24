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
        int n;
        cin >> n;
        vector<ll> v(n);
        for(int i = 0 ; i < n; i++)cin >> v[i];

        ll ans = 1e18;

        auto upd = [&](vector<ll> a){
            sort(a.begin(),a.end());
            for(int i = 1; i < a.size();i++){
                if(a[i-1] == a[i])return;
            }
            ll res = 0;
            for(int i = 0; i < a.size(); i+=2){
                res = max(res,a[i+1]-a[i]);
            }   
            ans = min(ans,res);
        };

        if(n%2 == 0){
            upd(v);
            cout << ans << "\n";
            continue;
        }
        for(int i = 0; i < n; i++){
            for(auto x:{1,-1}){
                v.push_back(v[i]+1);
                upd(v);
                v.pop_back();
            }
        }
        cout << ans << "\n";
    }

    return 0;
}