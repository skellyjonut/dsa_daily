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
        ll k,x;
        cin >> k >> x;
        ll l = 1,r = 2*k - 1;
        ll res = 2*k-1;
        bool flag = false;
        while(l <= r){
            ll val;
            ll mid = (l+r)/2;
            if(mid >= k){
                val = (k*(k+1))/2;
                ll rem = ((k-1)*k)/2;
                ll p = 2*k-1 - mid;
                ll sub = (p*(p+1))/2;
                val = val + rem - sub;
            }
            else{
                val = (mid*(mid+1))/2;
            }
            if(val >= x){
                res = mid;
                r = mid-1;
            }
            else{
                l = mid + 1;
            }
        }
        cout << res << "\n";
    }

    return 0;
}