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
        ll res = INT_MAX;
        for(int i = 1; i*i <= n; i++){
            if(i > k)break;
            if(n%i == 0){
                res = min(res,n/i);
                ll val = n/i;
                if(val <= k){
                    res = min(res,n/val);
                }
            }
        }
        cout << res << "\n";
        }
    return 0;
}