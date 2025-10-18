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
        ll a,b;
        cin >> a >> b;
        ll n = max(a,b);
        if(n == a){
            if(n%2 == 1){
                cout << (n-1)*(n-1) + b << "\n";
            }
            else{
                cout << n*n-b+1 << "\n";
            }
        }
        else{
            if(n%2==0){
                cout << (n-1)*(n-1) + a << "\n";
            }
            else{
                cout << n*n-a+1 << "\n";
            }
        }
        
    }
    return 0;
}