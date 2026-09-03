#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int w[105],v[105];
ll dp[105][100005];


ll solve(int ind,int val){
    if(val == 0)return 0;
    if(ind < 0)return 1e15;
    if(dp[ind][val] != -1)return dp[ind][val];
    ll ans  = solve(ind-1,val);
    if(val - v[ind] >= 0)ans = min(ans,solve(ind-1,val-v[ind])+w[ind]);
    return dp[ind][val] = ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,wt;
    cin >> n >> wt;
    // vector<ll> v(n),w(n);
    for(int i = 0 ; i < n; i++){
        cin >> w[i] >> v[i];
    }
    memset(dp,-1,sizeof(dp));
    for(int i = 1e5; i >= 0; i--){
        if(solve(n-1,i) <= wt){
            cout << i;
            break;
        }
    }
    return 0;
}