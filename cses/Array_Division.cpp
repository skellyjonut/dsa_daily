#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;
int k;

bool can_make(ll s,vector<ll>& v){
    ll splits = 0;
    ll n = v.size();
    ll sum = 0;
    for(int i = 0; i < n; i++){
        if(v[i] > s)return false;
        if(sum+v[i] <= s){
            sum+=v[i];
        }
        else{
            sum = v[i];
            splits++;
        }
    }
    return splits <= k-1;
}   

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0 ; i <n ; i++)cin >> v[i];

    ll lo = 1, hi = 1e18;
    ll res = 1;

    while(lo <= hi){
        ll mid = lo + (hi-lo)/2;
        if(can_make(mid,v)){
            res = mid;
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    cout << res;

    return 0;
}