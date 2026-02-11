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
        vector<ll> b(n);
        b[0] = v[0];
        ll res = 0;
        for(int i = 1; i < n; i++){
            b[i] = v[i] + b[i-1];
        }
        ll sum = b[n-1];
        for(int i = 0 ;i < n-1;i++){
            res = max(res,__gcd(b[i],sum-b[i]));
        }
        cout << res << "\n";
    }
    return 0;
}