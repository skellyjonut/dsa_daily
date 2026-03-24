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
        vector<int> res(n);
        for(int i = 0 ; i < n; i++){
            ll l=0,r=0;
            for(int j = i + 1; j < n; j++){
                if(v[j] > v[i])r++;
                else if(v[j] < v[i])l++;
            }
            res[i] = max(l,r);
        }
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}