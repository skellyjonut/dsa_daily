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
        ll n,k;
        cin >> n >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        sort(v.begin(),v.end());
        ll min_dif = 2e18;
        ll k_dif = v[0];

        for(ll i = 1 ; i < n;i++){
            ll dif = llabs(v[i]-v[i-1]);
            k_dif = min(dif,k_dif);
        }
        if(k == 1){
            cout << k_dif << "\n";
        }
        else if(k == 2){
            ll res = k_dif;
            for(ll i = 0 ; i < n; i++){
                for(ll j = i + 1; j < n; j++){
                    ll dif = v[j]-v[i];
                    auto it = lower_bound(v.begin(),v.end(),dif);
                    if(it != v.end()){
                        res = min(res,llabs(*it-dif));
                    }
                    if(it != v.begin()){
                        res = min(res,llabs(*prev(it)-dif));
                    }
                }
            }
            cout << res << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }

    return 0;
}