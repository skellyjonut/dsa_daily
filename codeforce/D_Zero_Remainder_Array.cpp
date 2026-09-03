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

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];
        // ---- Your logic here ----
        map<ll,ll> mp;
        ll cnt = 0,c=0;
        for(auto i:v){
            if(i%k){
                mp[k - (i%k)]++;
                c++;
            }
        }
        if(c == 0){
            cout << 0 << "\n";
            continue;
        }
        ll mx = 0;
        for(auto i:mp){
            if(i.ff == 0)continue;
            if(i.ss >= cnt){
                cnt = max(cnt,i.ss);
                mx = i.ff;
            }
        }
        ll ans = (cnt-1)*k + mx + 1;
        cout << ans << "\n"; 

    }

    return 0;
}