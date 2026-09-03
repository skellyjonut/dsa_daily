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
    ll n,m;
    cin >> n >> m;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)cin >> v[i];

    vector<vector<ll>> dp(n,vector<ll>(m+2,0));

    if(v[0] == 0){
        for(int i = 1 ; i <= m; i++){
            dp[0][i] = 1;
        }
    }
    else{
        dp[0][v[0]] = 1;
    }

    for(int i = 1;  i < n; i++){
        if(v[i] == 0){
            for(int j = 1; j <= m; j++){
                dp[i][j] = (dp[i-1][j-1]%M + dp[i-1][j]%M + dp[i-1][j+1]%M)%M;
            }
        }
        else{
            dp[i][v[i]] = (dp[i-1][v[i]-1]%M + dp[i-1][v[i]]%M + dp[i-1][v[i]+1]%M)%M;
        }
    }
    ll res = 0;
    for(int i = 1 ; i <= m; i++){
        res = (res+dp[n-1][i])%M;
    }
    cout << res << "\n";

    return 0;
}