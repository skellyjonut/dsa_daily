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
        ll n;
        cin >> n;

        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<pair<ll,ll>> temp;
        for(ll i = 0; i < n;i++){
            temp.push_back({v[i],i});
        }
        sort(temp.rbegin(),temp.rend());
        ll sum = 0;
        vector<ll> res(n+1);
        res[0] == 0;
        for(ll i = 0; i < n;i++){
            if(i%2 == 0){
                res[temp[i].ss+1] = i/2 + 1;
                sum+= (i/2 + 1)*2*temp[i].ff;
            }
            else{
                res[temp[i].ss+1] = -(i/2 + 1);
                sum+= (i/2 + 1)*2*temp[i].ff;
            }
        }
        cout << sum << "\n";
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}