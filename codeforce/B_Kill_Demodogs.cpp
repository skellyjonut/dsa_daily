#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int M = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n,res = 0;
        cin >> n;
        res = ((n*(n+1)%M)*(4*n-1))%M;
        res = (res*337)%M;
        cout << res << "\n";
    }

    return 0;
}