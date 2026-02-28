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
        ll n,k;
        cin >> n >> k;
        k--;
        // ---- Your logic here ----
        if(n%2 == 0)cout << k%n + 1 << "\n";
        else{
            int steps = n/2;
            int taken = k/steps;
            int res = k + taken;
            cout << res%n + 1 << "\n";
        }

    }

    return 0;
}