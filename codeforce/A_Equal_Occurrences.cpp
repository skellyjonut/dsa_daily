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
        unordered_map<int,int> up;
        unordered_map<int,int> pp;
        // --start writing from here--
        for(auto i:v){
            up[i]++;
        }
        for(auto j: up){
            for(int l = 1; l <= j.second; l++){
                pp[l]++;
            }
        }
        int res = 0;
        for(auto k: pp){
            res = max(res,(k.first)*(k.second));
        }
        cout << res << "\n";
    }
    return 0;
}