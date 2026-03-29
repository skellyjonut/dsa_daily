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
    vector<ll> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    ll sum = 0;
    for(auto i:v)sum+=i;
    if(sum >= m)cout << "Yes";
    else{cout << "No";}

    return 0;
}