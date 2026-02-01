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
        ll n,q;
        cin >> n >> q;

        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> x(q);
        for (int i = 0; i < q; i++) {
            cin >> x[i];
        }
        ll min_x = INT_MAX;
        for(int i = 0 ; i < q; i++){
            ll val = pow(2,x[i]);
            if(x[i] >= min_x)continue;
            ll add = pow(2,x[i]-1);
            for(int j = 0; j < n; j++){
                if(a[j]%val == 0)a[j]+=add;
            }
            min_x = min(min_x,x[i]);
        }  
        for(auto i:a){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}