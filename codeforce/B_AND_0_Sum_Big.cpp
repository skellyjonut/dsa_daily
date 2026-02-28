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
        ll n,k,ans = 1;
        cin >> n >> k;
        for(int i = 0; i < k; i++){
            ans = (ans*n)%M;
        }
        cout << ans << "\n";
    }

    return 0;
}