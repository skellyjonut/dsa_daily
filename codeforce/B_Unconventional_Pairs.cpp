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
        vi v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        // --start writing from here--
        sort(v.begin(),v.end());
        int res = INT_MIN;
        for(int i = 0; i < n; i+=2){
            res = max(res,abs(v[i] - v[i+1]));
        }
        cout << res << "\n";
    }
    return 0;
}