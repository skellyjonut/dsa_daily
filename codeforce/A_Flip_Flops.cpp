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
        ll n,c,k;
        cin >> n >> c >> k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        sort(v.begin(),v.end());
        for(ll i = 0 ; i < n; i++){
            if(v[i] < c && k > 0){
                ll val = min(k,c-v[i]);
                k -= val;
                c += val;
                c += v[i];
            }  
            else if(v[i] <= c)c+=v[i]; 
        }
        cout << c << "\n";
    }

    return 0;
}