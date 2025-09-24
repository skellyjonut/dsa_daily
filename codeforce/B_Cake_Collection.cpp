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
        ll n,m;
        cin >> n >> m;
        vll v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        // --start writing from here--
        ll sum = 0;
        for(int i = m; i > m - v.size(); i--;)
    }
    return 0;
}