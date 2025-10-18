#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vll v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        // --start writing from here--
        int res = v[0];
        int val;
        int sum;
        for(int i = 0; i < n;i++){
            sum = v[i];
            res = max(res,sum);
            for(int j = i+1; j < n;j++){
                sum = (sum+v[j])/(j-i+1);
                res = max(res,sum);
            }
        }
        cout << res << "\n";
    }
    return 0;
}