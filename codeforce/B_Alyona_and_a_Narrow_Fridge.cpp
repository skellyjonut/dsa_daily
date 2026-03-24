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

    int n,h;
    cin >> n >> h;
    vector<ll> v(n);
    for(int i = 0 ; i <n; i++)cin>>v[i];
    ll l = 0, r = n,k=0;
    while(l <= r){
        ll mid = (l+r)/2;
        vector<ll> f(v.begin(),v.begin()+mid);
        sort(f.begin(),f.end());
        ll m = f.size();
        ll tot = 0;
        for(int i = m-1; i >= 0;i-=2){
            tot+=f[i];
        }
        if(tot <= h){
            k = mid;
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout << k;

    return 0;
}