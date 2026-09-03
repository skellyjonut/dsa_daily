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
    vector<ll> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    map<ll,ll> mp;
    ll i=0,j=0,cnt=0;

    while(j < n){
        mp[v[j]]++;
        while((int)mp.size() > k){
            mp[v[i]]--;
            if(mp[v[i]] == 0)mp.erase(v[i]);
            i++;
        }
        cnt += (j-i+1);
        j++;
    }
    cout << cnt;

    return 0;
}