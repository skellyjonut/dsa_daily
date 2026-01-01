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

    ll t;
    cin >> t;
    while (t--) {
        ll n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        long long res = INT_MAX;
        long long ec = 0;
        
        for(int i = 0; i < n; i++){
            if(v[i]%2 == 0)ec++;
            if(v[i]%k == 0)res = 0;
            res = min(res,k-(v[i]%k));
        }
        if(k == 4){
            if(ec >= 2)res = 0;
            if(ec == 1)res = min(res,1LL);
            if(ec == 0)res = min(res,2LL);
        }
        
        cout << res << "\n";
    }

    return 0;
}