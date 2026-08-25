#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;;
    // cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        map<ll,ll> mp;
        for (int i = 0; i < n; i++)cin >> v[i]; 
        // ---- Your logic here ----
        ll res = 1;
        for(auto i:v){
            mp[i]++;
        }   
        for(auto& [x,y]:mp){
            res *= (y+1);
            res %= M;
        }
        res = (res-1+M)%M;
        cout << res;
    }

    return 0;
}