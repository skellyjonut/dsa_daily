#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
ll M = 1e9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll m = n*(n-1)/2;
        vector<ll> v(m);
        for (int i = 0; i < m; i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        vector<ll> res;
        ll l = 0;

        for(int i = 1; i < n; i++){
            res.push_back(v[l]);
            l += n-i; 
        }
        res.push_back(v[m-1]);
        for(auto i: res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}