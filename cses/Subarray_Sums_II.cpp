#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n+1);
    for(int i = 1 ; i <= n; i++)cin >> v[i];
    v[0] = 0;
    for(int i = 1; i <= n; i++){
        v[i]+=v[i-1];
    }
    map<ll,ll> mp;
    ll res=0;
    for(int i = 0 ; i <= n; i++){
        ll req = v[i]-k;
        if(mp[req] > 0)res+=mp[req];
        mp[v[i]]++;
    }
    cout << res;

    return 0;
}