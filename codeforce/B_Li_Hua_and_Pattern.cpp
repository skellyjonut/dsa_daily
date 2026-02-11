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
        ll n,k;
        cin >> n >> k;

        vector<vector<ll>> v(n,vector<ll>(n));
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                cin >> v[i][j];
            }
        }
        int dif = 0;
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++){
                if(v[i][j] != v[n-i-1][n-j-1])dif++;
            }
        }
        dif/=2;
        if(dif > k){
            cout << "NO" << "\n";
        }
        else{
            ll temp = k-dif;
            if(temp%2 == 0)cout << "YES" << "\n";
            else{
                if(n%2 == 0){
                    cout << "NO" << "\n";
                }
                else{
                    cout << "YES" << "\n";
                }
            }
        }
    }

    return 0;
}