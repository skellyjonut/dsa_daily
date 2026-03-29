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

    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0;i < n; i++)cin >> v[i];
    ll res = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > v[i-1]){
            res= res+(v[i]/2);
        }
        else{
            res = res + v[i];
        }
    }
    cout << res;

    return 0;
}