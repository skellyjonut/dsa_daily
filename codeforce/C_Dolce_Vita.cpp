#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

bool pf(ll val,ll i, ll x,ll mid){
    if(val + (1LL)*(i+1)*(mid-1) <= x)return true; // i+1 cus 0 based indexing, 3rd day means increased for 2 days
    return false;
}

ll bs(ll val,ll i, ll x){
    ll low = 1,high = 1e9+5,ans = 0;
    while(low <= high){
        ll mid = (low+high)/2;
        if(pf(val,i,x,mid)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return ans; // gives the max amount of days sugar from this store can be bought
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n,x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        ll res = 0;
        vector<ll> prfx(n);

        /*it is always best to buy the smallest values first, so for each value from starting to finish. i check i
        the maximum till it can go, and when i try for the next valueu, i only check for it but use the prefix sum,
        */


        prfx[0] = v[0];
        for(int i = 1; i < n; i++){
            prfx[i] = prfx[i-1]+v[i];
        }
        for(int i =0; i < n;i++){
            res+= bs(prfx[i],i,x);
        }
        cout << res << "\n";
    }

    return 0;
}