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
        ll n,x,y;
        cin >> n >> x >> y;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        map<pair<ll,ll>,ll> mp;
        for(ll i = 0; i < n; i++){
            ll rem_x = v[i]%x;
            ll rem_y = v[i]%y;
            pair<ll,ll> p = {rem_x,rem_y};
            mp[p]++;
        }
        ll cnt = 0;
        for(ll i = 0 ; i < n; i++){
            ll rem_x = v[i]%x;
            ll rem_y = v[i]%y;
            pair<ll,ll> p = {rem_x,rem_y};
            ll x_need = x - v[i]%x;
            ll y_need = v[i]%y;
            if(x_need == x)x_need = 0;
            mp[p]--;
            cnt+=mp[{x_need,y_need}];
        }
        cout << cnt << "\n";
    }

    return 0;
}