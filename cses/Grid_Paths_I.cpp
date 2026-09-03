#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

ll dp[1001][1001];
ll n;

int solve(ll i,ll j,vector<string> &v){
    if(i >= n || j >= n)return 0;
    if(v[i][j] == '*')return 0;
    if(i == n-1 && j == n-1)return 1;
    if(dp[i][j] != -1)return dp[i][j];

    return dp[i][j] = (solve(i+1,j,v)%M + solve(i,j+1,v)%M)%M;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    string s;
    vector<string> v(n);
    memset(dp,-1,sizeof(dp));
    for(int i = 0 ; i < n; i++)cin >> v[i];
    vector<pair<ll,ll>> dirn = {{0,1},{1,0},{0,-1},{-1,0}};
    cout << solve(0,0,v);

    return 0;
}