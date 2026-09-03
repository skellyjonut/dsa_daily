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

    int n,a,b,c;
    cin >> n >> c;
    vector<ll> v(n);
    vector<ll> w(n);

    vector<vector<ll>> dp(n+1,vector<ll>(c+1,0));

    for(int i = 0 ; i < n; i++){
        cin >> w[i] >> v[i];
    }

    for(int i = w[0]; i <= c; i++){
        dp[0][i] = v[0];
    }

    for(int i = 1; i < n; i++){
        for(int j = 0; j <= c; j++){

            ll pick = INT_MIN;
            ll npick = dp[i-1][j];

            if(w[i] <= j){
                pick = v[i] + dp[i-1][j-w[i]];
            }
            dp[i][j] = max(pick,npick);
        }
    }

    cout << dp[n-1][c];

    return 0;
}