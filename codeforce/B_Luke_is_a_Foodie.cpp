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
        int n,x;
        cin >> n >> x;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----

        int l = v[0]-x;
        int r = v[0]+x;
        int res = 0;
        for(int i=1; i < n;i++){
            l = max(l,v[i]-x);
            r = min(r,v[i]+x);
            if(l > r){
                res++;
                l = v[i] - x;
                r = v[i] + x;
            }
        }
        cout << res << "\n";

    }

    return 0;
}