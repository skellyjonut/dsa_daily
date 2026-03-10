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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        // ---- Your logic here ----
        int mx = INT_MIN;
        for(int i = 0 ; i < n; i++){
            int val = a[i] - b[i];
            mx = max(val,mx);
        }
        int cnt = 0;
        vector<int> res;
        for(int i = 0 ; i < n; i++){
            if(a[i]-b[i] == mx){
                cnt++;
                res.push_back(i+1);
            }
        }
        cout << cnt << "\n";
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}