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

    ll n,k,q;
    cin >> n >> k >> q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    int ar = 1;
    unordered_map<ll,ll> mp;
    mp[1] = 1;
    for(int i = 1; i < n; i++){
        if(abs(v[i] - v[i-1]) <= k)mp[i+1] = ar;
        else{
            ar++;
            mp[i+1] = ar;
        } 
    }
    ll l,r;
    for(int i = 0; i < q; i++){
        cin >> l >> r;
        if(mp[l] == mp[r])cout << "Yes" << "\n";
        else{
            cout << "No" << "\n";
        } 
    }

    return 0;
}