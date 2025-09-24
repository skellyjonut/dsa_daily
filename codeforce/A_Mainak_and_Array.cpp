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
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // --start writing from here--
        int mx = v[n-1] - v[0];
        for(int i = 1; i < n; i++){
            mx = max(mx,v[i] - v[0]);
        }
        for(int i = 0; i < n-1; i++){
            mx = max(mx,v[n-1] - v[i]);
        }
        for(int i = 1; i < n; i++){
            mx = max(mx,v[i-1] - v[i]);
        }
        cout << mx << "\n";
    }
    return 0;
}