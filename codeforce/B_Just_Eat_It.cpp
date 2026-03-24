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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        bool flag = true;
        ll s = 0;
        for(int i = 0 ; i < n; i++){
            s+=v[i];
        }
        ll res = v[1];
        ll maxE = v[1];
        for(int i = 2; i < n; i++){
            maxE = max(v[i],v[i]+maxE);
            res = max(res,maxE);
        }
        ll r = res;
        res = v[0];
        maxE = v[0];
        for(int i = 1; i < n-1; i++){
            maxE = max(v[i],v[i]+maxE);
            res = max(res,maxE);
        }
        r = max(r,res);
        if(s > r){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}