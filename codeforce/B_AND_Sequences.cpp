#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];

        ll x = INT_MAX;
        for(auto i:v){
            x &= i;
        }
        ll r=0;
        for(auto i:v){
            if(i == x)r++;
        }
        ll res = 1;
        for(int i = 1 ; i <= n-2 ; i++){
            res = (res%M*i%M)%M;
        }
        cout << r*(r-1)%M*res%M << "\n";
    }

    return 0;
}