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
        ll a,b,c,d;
        cin >> a >> b >> c;
        // --start writing from here--
        if((2*b - c)%a == 0 && (2*b - c) > 0){
            cout << "YES" << "\n";
            continue;
        }
        if((a+c)%2 == 0){
            ll newB = (a+c)/2;
            if(newB%b == 0 && newB > 0){
                cout << "YES" << "\n";
                continue;
            }
        }
        if((2*b-a)%c == 0 && (2*b-a) > 0){
            cout << "YES" << "\n";
            continue;
        }
        cout << "NO" << "\n";
        
    }
    return 0;
}