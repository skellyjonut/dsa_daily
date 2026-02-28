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

        vector<int> v(n);
        int mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mx = max(v[i],mx);
        }

        // ---- Your logic here ----
        int cnt = 0;
        for(int i = 0 ; i < n; i++){
            if(v[i] == mx)cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}