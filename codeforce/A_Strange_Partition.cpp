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
        ll n,x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----
        long long min = 0;
        long long max = 0;
        for(int i = 0; i < n; i++){
            min+=v[i];
            max = max + (v[i]+x-1)/x;
        }
        cout << (min+x-1)/x << " " << max << "\n";

    }

    return 0;
}