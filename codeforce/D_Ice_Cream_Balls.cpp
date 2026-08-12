#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll l = 1,r = 2e9;
        ll k = r;
        while(l <= r){
            ll m = l + (r-l)/2;
            if(m*(m-1)/2+m >= n){
                k = m;
                r = m-1;
            }
            else{
                l = m+1;
            }
        }
        ll x = n - k*(k-1)/2;
        ll res = k+x;
        
        ll dif = (k+1)*k/2;
        if(dif <= n){
            ll extra = n-dif;
            res = min(res,k+1+extra);
        }
        cout << res << "\n";
        
    }
    return 0;
}