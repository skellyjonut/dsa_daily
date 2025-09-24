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
        ll n,k;
        cin >> k >> n;
        vi v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // --start writing from here--
        int mx = 1;
        bool flag = true;
        for(int i = 1; i < n; i++){
            if(v[i] < v[i-1]){
                cout << 1 << "\n";
                flag = false;
                break;
            }
            else if(v[i] == v[i-1]){
                cout << 1 << "\n";
                flag = false;
                break;
            }
            mx = max(mx,v[i]);
        }
        if(v.size() == 1){
            cout << k - v[0] + 1 << "\n";
            flag = false;
        }
        if(flag){
            cout << k - mx + 1 << "\n";
        }
        
    }
    return 0;
}