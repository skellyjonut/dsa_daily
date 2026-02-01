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
        ll n,c,res = 0;;
        cin >> n >> c;
        vector<ll> v(n);
        for(int i = 0; i < n;i++)cin>>v[i];
        ll lo = 1,hi = 1e9;
        while(lo <= hi){
            ll mid = lo + (hi-lo)/2;
            ll val = 0;
            for(auto i: v){
                if(val > c)break;
                val+= (i+2*mid)*(i+2*mid);
            }
            if(val <= c){
                res = mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        cout << res << "\n";
    }

    return 0;
}