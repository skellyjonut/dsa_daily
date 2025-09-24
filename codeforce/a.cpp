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

    ll t,a,b;
    cin >> t;
    while(t--) {
    
        // --start writing from here--
        cin >> a >> b;
        if(a == b){
            cout << 0 << "\n";
        }
        else if(a%b == 0 || b%a == 0){
            cout << 1 << "\n";
        }
        else{
            cout << 2 << "\n";
        } 
    }
    return 0;
}