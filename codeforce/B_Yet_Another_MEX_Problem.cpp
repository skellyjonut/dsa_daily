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
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        set<int> st;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            st.insert(v[i]);
        }
        int mex = 0;
        while(st.count(mex)){
            mex++;
        }
        // ---- Your logic here ----
        cout << min(mex,k-1) << "\n";
    }

    return 0;
}