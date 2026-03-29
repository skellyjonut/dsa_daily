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

    ll n;
    cin >> n;

    vector<int> v(n);        
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll res = 0;
    int mx = v[n-1]-v[0];
    if(mx == 0){
        n--;
        res = 1LL*(n*(n+1))/2;
    }
    else{
        ll l = 0,r = n-1;
        ll lc = 0,rc=0;
        while(v[l] == v[0]){
            l++;
            lc++;
        }
        while(v[r] == v[n-1]){
            r--;
            rc++;
        }
        res = lc*rc;
    }
    cout << mx << " " << res;

    return 0;
}