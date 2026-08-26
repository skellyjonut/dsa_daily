#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

bool solve(ll t,vector<ll>& v,ll k){
    ll ans = 0;
    for(auto i:v){
        ans += t/i;
        if(ans >= k)return true;
    }   
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }
    ll l = 1,r = 1LL*(*min_element(v.begin(),v.end()))*k;
    ll res = r;
    while(l <= r){
        ll t = l + (r-l)/2;
        if(solve(t,v,k)){
            res = t;
            r = t-1;  
        }
        else{
            l = t+1;
        }
    }
    cout << res;

    return 0;
}