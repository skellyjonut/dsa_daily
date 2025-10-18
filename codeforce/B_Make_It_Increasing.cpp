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
        int res = 0;
        for(int i = n-2; i >=0; i--){
            while(v[i+1] <= v[i]){
                v[i]/=2;
                res++;
                if(v[i] == 0)break;
            }
            if(v[i] == 0 && v[i+1] == 0){
                res = -1;
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}