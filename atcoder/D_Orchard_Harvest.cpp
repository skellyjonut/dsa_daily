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

    ll n,m;
    cin >> n >> m;
    vector<ll> v(n),d(n),k(n,1);
    for(int i =0; i < n; i++)cin >> v[i] >> d[i];
    priority_queue<pair<ll,ll>> pq;
    for(int i = 0 ; i < n; i++){
        pq.push({v[i],i});
    }
    ll res = 0;
    for(int i =0; i < m; i++){
        if(pq.empty())break;
        pair<ll,ll> top = pq.top();
        pq.pop();
        ll val = top.ff;
        ll ind = top.ss;
        res+=val;
        val = v[ind]-(k[ind]*d[ind]);
        val = max(val,1LL*0);
        pq.push({val,ind}); 
        k[ind]++;
    }
    cout << res;

    return 0;
}