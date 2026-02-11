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
        int res = (1 << 30)-1;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] != i)res&=v[i];
        }
        cout << res << "\n";
    }

    return 0;
}