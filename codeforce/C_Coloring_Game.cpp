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
        ll res = 0;
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < i; j++){
                int r = max(v[n-1],v[i]*2);
                int mark = r - v[i] - v[j];
                int x = upper_bound(v.begin(),v.begin()+j,mark) - v.begin();

                res += (j-x);
            }
        }
        cout << res << "\n";
    }

    return 0;
}