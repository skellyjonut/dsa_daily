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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        unordered_map<ll,ll> mp;
        // ---- Your logic here ----  
        for(int i = 0 ; i < n; i++){
            ll res = 31 - __builtin_clz(v[i]);
            mp[res]++;
        }
        long long res = 0;
        for(auto i:mp){
            if(i.ss >= 2){
                ll val = (i.ss)*(i.ss-1)/2;
                res+=val;
            }
        }
        cout << res << "\n";
    }

    return 0;
}