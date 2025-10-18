#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--) {
        unordered_map<ll,ll> mp;
        ll n,k;
        cin >> n >> k;
        vi v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        // --start writing from here--
        ll res = 0;
        int c = 0;
        int count = 0;
        for(int i = 0; i < n; i++){
            mp[v[i]]++;
        }
        for(int i = 0; i < k; i++){
            if(mp.count(i)){

            }
            else{
                c++;
            }
        }
        if(mp[k] >= c){
            res = mp[k];
        }
        else{
            res = mp[k] + abs(c-mp[k]);
        }
        cout <<  res << "\n";
        
    }
    return 0;
}