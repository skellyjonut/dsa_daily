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

    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> v(n);
    for(int i = 0; i < n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    vector<ll> dif;
    for(int i = 1; i < n; i++){
        if(v[i] - v[i-1] > x){
            dif.push_back(v[i] - v[i-1]);
        }
    }
    sort(dif.begin(),dif.end());
    ll groups = dif.size()+1;
    if(groups == 1){
        cout << 1 << "\n";
    }
    else{
        /*i need to iterate till k becomes 0, first i need to check how much k i need to fix a dif of size 
        i,and for each solved dif we can reduce the groups by 1*/
        // is it ubound(dif/(2*x)+1)
        for(int i = 0; i < dif.size(); i++){
            ll val = (dif[i]-1)/x;
            k-=val;
            if(k >= 0)groups--;
            else{
                break;
            }
        }
        cout << groups << "\n";
    }

    return 0;
}