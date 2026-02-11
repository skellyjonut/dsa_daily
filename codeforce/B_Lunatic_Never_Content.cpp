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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll ans = 0;
        for(int i = 0; i < n/2+1; i++){
            ans = __gcd(ans,abs(v[i] - v[n-i-1]));
        }
        cout << ans << "\n";
    }

    return 0;
}