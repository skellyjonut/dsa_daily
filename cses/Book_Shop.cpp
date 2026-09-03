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
    int n,wt;
    cin >> n >> wt;
    vector<int> v(n),w(n);
    for(int i = 0 ; i < n; i++)cin >> w[i];
    for(int i = 0 ; i < n; i++)cin >> v[i];

    vector<vector<int>> dp(n,vector<int>(wt+1,0));
    for(int i = w[0] ; i <= wt;i++){
        dp[0][i] = v[0];
    }
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= wt; j++){
            int p = INT_MIN;
            if(j >= w[i]){
                p = v[i] + dp[i-1][j-w[i]];
            }
            int np = dp[i-1][j];
            dp[i][j] = max(p,np);
        }
    }

    cout << dp[n-1][wt];

    return 0;
}