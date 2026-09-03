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

    ll n;
    cin >> n;
    vector<ll> v(n+1);
    for(int i = 1 ; i <= n; i++)cin >> v[i];
    v[0] = 0;
    map<ll,ll> mp;
    for(int i = 1; i <= n; i++)v[i]+=v[i-1];

    ll res = 0;
    for(int i = 0;i <= n; i++){
        ll req = ((v[i]%n)+n)%n;
        if(mp[req] > 0)res += mp[req];

        mp[req]++;
    }
    cout << res;

    return 0;
}