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
        ll n;
        cin >> n;
        vector<pair<ll,ll>> res;
        for(int i = 0; i < n; i++){
            ll k;
            cin >> k;
            vector<ll> v(k);
            ll mx = INT_MIN;
            ll val = 0;
            for(int i = 0 ; i < k; i++){
                cin >> v[i];
                val = max(val,v[i]-i+1);
            }
            res.push_back({val,k});
        }
        sort(res.begin(),res.end());
        ll x = res[0].ff;
        ll k_sum = res[0].ss;
        for(int i = 1; i < res.size(); i++){ 
            x = max(x,res[i].ff - k_sum);
            k_sum += res[i].ss;           
        }
        cout << x << "\n";
    }

    return 0;
}