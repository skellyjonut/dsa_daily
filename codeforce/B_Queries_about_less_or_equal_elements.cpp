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

    ll n,m;
    cin >> n >> m;
    vector<ll> a(n),b(m);
    for(int i = 0 ; i < n; i++)cin >> a[i];
    map<ll,ll> mp;

    sort(a.begin(),a.end());
    for(int i = 0 ; i < n; i++){
        mp[a[i]] = i;
    }

    for(int i = 0 ; i < m;i++)cin >> b[i];

    for(auto i:b){
        auto it = mp.upper_bound(i);
        if(it == mp.begin()){
            cout << 0 << " ";
        }
        else{
            it--;
            cout << it->ss + 1 << " ";
        }
    }

    return 0;
}