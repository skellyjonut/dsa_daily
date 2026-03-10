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
        vector<int> p;
        vector<int> val;
        ll res = 0;
        for(int i = 0 ;i  < n; i++){
            if(v[i] < i+1){
                res += lower_bound(p.begin(),p.end(),v[i]) - p.begin();
                p.push_back(i+1);
            }
        }
        cout << res << "\n";
    }

    return 0;
}