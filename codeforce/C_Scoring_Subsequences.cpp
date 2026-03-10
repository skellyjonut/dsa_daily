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
        ll max_score = 1;
        ll f = 1;
        vector<int> res;
        for(int i = 0; i < n; i++){
           int l = 1, r = i+1;
           while(l <= r){
            int mid = (l+r)/2;
            if(v[i-mid+1] >= mid){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
           }
           res.push_back(r);
        }
        for(auto i: res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}