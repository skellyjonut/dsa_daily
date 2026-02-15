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
        ll n,m;
        cin >> n >> m;
        vector<vector<ll>> v(n,vector<ll>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }
        ll res = 0;
        for(int i = 0; i < m; i++){
            vector<ll> srt;
            for(int j = 0; j < n; j++){
                srt.push_back(v[j][i]);
            }
            sort(srt.begin(),srt.end());
            ll prf = 0;
            ll sum =0;
            for(int j = 0; j < n; j++){
                prf+=srt[j];
                sum += (j+1)*srt[j] - prf;
            }
            res+=sum;
        }
        cout << res << "\n";
    }

    return 0;
}