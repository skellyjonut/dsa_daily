#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int flipExact(int x) {
    int mask = 0;
    int temp = x;
    while (temp > 0) {
        mask = (mask << 1) | 1;
        temp >>= 1;
    }
    return x ^ mask;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) {
        ll a,b;
        cin >> a >> b;
        
        if(b > a)cout << -1 << "\n";
        else if(a == b){
            cout << 0 << "\n";
        }
        else{
            cout << 2 << "\n";
            cout << flipExact(a) << " " << flipExact(b) << "\n";
        }
    }
    return 0;
}