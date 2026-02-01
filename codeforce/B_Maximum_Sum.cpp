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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<ll> prfx(n);
        sort(v.begin(),v.end());
        prfx = v;
        reverse(prfx.begin(),prfx.end());
        for(int i = 1; i < n; i++){
            v[i] = v[i]+v[i-1];
        }
        ll sum = v[n-1];
        for(int i = 1; i < n; i++){
            prfx[i] = prfx[i] + prfx[i-1];
        }
        ll res = max(sum - prfx[k-1], sum - v[2*k-1]);
        for(int i = 1 ; i < k; i++){
            ll max_val = prfx[i-1];
            ll min_val = v[(k-i)*2 - 1];
            ll val = sum - (min_val+max_val);
            res = max(res,val);
        }
        cout << res << "\n";
    }

    return 0;
}   