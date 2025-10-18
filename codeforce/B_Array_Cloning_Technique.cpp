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
        ll n;
        cin >> n;
        vll v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        // --start writing from here--
        map<ll,ll> mp;
        for(ll i = 0; i < n;i++){
            mp[v[i]]++;
        }
        ll mx = 0;
        for(auto i:mp){
            mx = max(mx,i.second);
        }
        ll res = 0;
        while(mx < n){
            res++;
            if(mx * 2 <= n){
                res+=mx;
                mx= mx*2;
            }
            else{
                res = res + (n-mx);
                mx = n;
            }
        }
        cout << res << "\n";
    }
    return 0;
}