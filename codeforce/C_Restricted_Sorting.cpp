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

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> srt(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        srt = v;
        sort(srt.begin(),srt.end());

        if(is_sorted(v.begin(),v.end())){
            cout << -1 << "\n";
        }
        else{
            ll res = INT_MAX;
            ll mn = srt[0];
            ll mx = srt[n-1];

            for(ll i = 0 ; i < n;i++){
                if(v[i] != srt[i]){
                    if(v[i] == mx)continue;
                    else{
                        ll curr = max(mx-v[i],v[i]-mn);
                        res = min(curr,res);
                    }
                }
            }
            cout << res << "\n";    
        }
    }

    return 0;
}