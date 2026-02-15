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
        vector<ll> v(n),q(k);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll qmax = 0;
        for (int i = 0; i < k; i++) {
            cin >> q[i];
        }
        vector<ll> prx(n);
        prx[0] = v[0];
        for(int i = 1 ; i < n ; i++){
            prx[i] = v[i] + prx[i-1];
        }   
        vector<ll> maxi(n);
        ll maxq = v[0];
        for(int i = 1 ; i < n ; i++){
            maxq = max(maxq,v[i]);
            maxi[i] = maxq;
        } 
        vector<ll> res(k);
        for(int i = 0; i < k; i++){
            int idx = upper_bound(maxi.begin(),maxi.end(),q[i]) - maxi.begin() - 1;
            res[i] = prx[idx];
            if(v[0] > q[i]){
                res[i] = 0;
            }        
        }
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}