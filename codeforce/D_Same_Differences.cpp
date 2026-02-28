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
        vector<ll> v(n+1);
        for(int i = 1; i <= n; i++)cin >> v[i];
        unordered_map<ll,ll> mp;
        ll res = 0;
        for(int i =1; i <= n; i++){
            if(mp.count(v[i]-i)){
                res+= mp[v[i]-i];
                mp[v[i]-i]++;
            }
            else{
                mp[v[i]-i]++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}   