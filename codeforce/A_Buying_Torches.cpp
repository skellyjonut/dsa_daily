#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

ll ceil_div(ll a,ll b){
    return (a + b-1)/b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll x,y,k,res;
        cin >> x >> y >> k;
        res = ceil_div((k*y + k - 1),(x-1));
        cout << res+k << "\n";
    }

    return 0;
}