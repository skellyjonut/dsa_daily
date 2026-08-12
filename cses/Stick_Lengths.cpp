#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0 ; i < n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    ll k = v[n/2];
    ll res = 0;
    for(int i = 0 ; i < n; i++){
        res += abs(v[i]-k);
    }
    cout << res << "\n";

    return 0;
}