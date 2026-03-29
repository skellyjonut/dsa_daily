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

    ll n,k;
    cin >> n >> k;
    vector<ll> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    sort(v.rbegin(),v.rend());

    ll res = 0;
    if(k >= n)res = k;
    else{
        res+=k;
        for(int i = k; i < n; i++){
            res+=v[i];
        }
    }
    cout << res;

    return 0;
}