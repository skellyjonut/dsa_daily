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
        ll n,r;
        cin >> r >> n;
        ll res;
        if(abs(r)%2 == 1){
            if(n%4 == 0){
                res = r;
            }
            else if(n%4 == 1){
                res = n+r;
            }
            else if(n%4 == 2){
                res = r-1;
            }
            else{
                res = r-n-1;
            }
        }
        else{
            if(n%4 == 0){
                res = r;
            }
            else if(n%4 == 1){
                res = r-n;
            }
            else if(n%4 == 2){
                res = r+1;
            }
            else{
                res = n+r+1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}