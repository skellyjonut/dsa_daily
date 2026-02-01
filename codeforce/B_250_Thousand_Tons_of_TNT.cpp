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

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        for(ll i = 1; i < n; i++){
            v[i] = v[i-1]+v[i];
        }
        ll res = 0;
        for(ll k = 1;k <= n; k++){
            if(n%k)continue;
            ll mn = v[k-1];
            ll mx = v[k-1];
            for(ll i = k-1+k;i < n;i+=k){
                ll curr = v[i] - v[i-k];
                mn = min(mn,curr);
                mx = max(mx,curr);
            }
            res = max(res,mx - mn);
        }
        cout << res << "\n";
    }

    return 0;
}