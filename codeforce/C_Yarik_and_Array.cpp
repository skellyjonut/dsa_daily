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

        // ---- Your logic here ----
        // apply kadanes algorithm also check whether new elemnt is diff parity

        ll res = v[0];
        ll mx = v[0];
        for(int i = 1; i < n; i++){
            if(abs(v[i])%2 == abs(v[i-1])%2){
                mx = v[i];
            }
            else{
                mx = max(v[i],mx+v[i]);
            }
            res = max(res,mx);
        }
        cout << res << "\n";
    }

    return 0;
}