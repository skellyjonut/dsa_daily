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
        ll n,k,pos;
        cin >> n >> k;
        vector<ll> a(n),b(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n; i++)cin>>b[i];

        ll res = INT_MIN;
        ll max_b = b[0],sum_a = 0;
        for(int i = 0; i < min(n,k); i++){
            sum_a += a[i];
            max_b = max(max_b,b[i]);
            pos = sum_a + (k-i-1)*max_b;
            res = max(res,pos);
        }
        cout << res << "\n";
    }

    return 0;
}
