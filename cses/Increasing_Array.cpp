#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    ll res = 0;
    for(int i = 1; i < n;i++){
        if(v[i] < v[i-1]){
            res = res + (v[i-1]-v[i]);
            v[i] = v[i] + (v[i-1]-v[i]);
        }
    }
    cout << res;
    
    return 0;
}