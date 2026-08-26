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

    ll n,a,b;
    cin >> n;
    vector<pair<ll,ll>> v;
    for(int i = 0 ; i < n; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    ll res = 0;
    ll crt = 0;
    for(auto [a,b]:v){
        crt += a;
        res += (b-crt);
    }
    cout << res << "\n";

    return 0;
}