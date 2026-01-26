#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll tot = n;
        n--;
        vector<long long> v;
        ll k = log2(n);
        for(ll i = pow(2,k)-1; i >= 0;i--){
            v.push_back(i);
        }
        for(ll i = pow(2,k); i < tot; i++){
            v.push_back(i);
        }
        for(auto i: v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}