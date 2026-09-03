#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;



ll comb(ll n){
    return (n*(n-1))/2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin >> n >> m;
    ll k = n/m;
    ll rem = n%m;
    ll mn = rem*(comb(k+1)) + (m-rem)*(comb(k));
    ll mx = comb(n-m+1);

    cout << mn << " " << mx;

    return 0;
}