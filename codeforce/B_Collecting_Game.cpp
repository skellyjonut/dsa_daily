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
        ll n,a;
        cin >> n;
        vector<pair<ll,ll>> v(n);
        for(int i = 0; i < n; i++){
            cin >> a;
            v[i] = {a,i};
        }
        sort(v.begin(),v.end());
        vector<ll> pref(n);
        pref[0] = v[0].first;
        for(int i = 1; i < n; i++){
            pref[i] = pref[i-1] + v[i].first;
        }
        vector<ll> ans(n);
        for(int i = 0; i < n; i++){
            int j = i;
            int found = i;
            while(j < n){
                pair<ll,ll> temp = {pref[j]+1,INT_MIN};
                ll idx = lower_bound(v.begin(),v.end(),temp) - v.begin();
                idx--;
                if(idx == j){
                    break;
                }
                found+=idx-j;
                j = idx;
            }
            ans[v[i].second] = found;
        }
        for(auto i:ans){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}