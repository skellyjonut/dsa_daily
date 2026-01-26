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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----
        int oneC = 0;
        int zeroC = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 0)zeroC++;
            if(v[i] == 1)oneC++;
        }
        long long res = pow(2,zeroC);
        res*=oneC;
        cout << res << "\n";
    }

    return 0;
}