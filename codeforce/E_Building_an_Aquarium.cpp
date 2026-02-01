    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define pb push_back
    #define ff first
    #define ss second
    #define all(x) (x).begin(), (x).end()


    ll findTot(vector<ll> &arr){
        ll tot = 0,h = arr[0];
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < h){
                tot+= h-arr[i];
            }
        }
        return tot;
    }


    int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        int t;
        cin >> t;
        while (t--) {
            ll n,x;
            cin >> n >> x;

            vector<ll> v(n+2,0);
            for (ll i = 1; i <= n; i++) {
                cin >> v[i];
            }
            ll lo = 0, hi = 1e12;
            ll ans = -1;
            while(lo <= hi){
                ll mid = lo+(hi-lo)/2;
                v[0] = mid;
                v[n+1] = mid;
                if(findTot(v) <= x){
                    ans = mid;
                    lo = mid+1;
                }
                else{
                    hi = mid-1;
                }
            }
            cout << ans << "\n";

        }

        return 0;
    }