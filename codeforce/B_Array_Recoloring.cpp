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
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i].ff;
            v[i].ss = i;
        }
        // ---- Your logic here ----
        ll f = v[0].ff;
        ll l = v[n-1].ff;
        ll res = 0;
        if(k == 1){
            res = f+l;
            for(int i = 1; i < n-1;i++){
                res = max(res,v[i].ff + max(f,l));
            }
            cout << res << "\n";
            continue;
        }
        sort(v.rbegin(),v.rend());
        for(int i = 0 ; i <= k; i++){
            res+= v[i].ff;
        }
        cout << res << "\n";
    }

    return 0;
}