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
        vi res;
        long long r = 0;
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(v[i]!=0){
                if(!flag){
                    r++;
                    flag = true;
                }
            }
            else{
                flag = false;
            }
        }
        if(r >= 2){
            cout << 2 << "\n";
        }
        else if(r == 0){
            cout << 0 << "\n";
        }
        else{
            cout << 1 << "\n";
        }
        
    }
    return 0;
}