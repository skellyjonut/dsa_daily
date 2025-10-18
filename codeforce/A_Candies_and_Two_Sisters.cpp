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
        if(n == 1 || n == 2)cout << 0 << "\n";
        else{
            if(n%2 == 0){
                cout << n/2 - 1 << "\n";
            }
            else{
                cout << n/2 << "\n";
            }
            
        }
    }
    return 0;
}