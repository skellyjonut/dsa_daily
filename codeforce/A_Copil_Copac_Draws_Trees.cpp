#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

vector<vector<int>> adj;
vector<int> dp;
map<pair<int,int>,int> ind;


void dfs(int v,int p){
    for(auto x:adj[v]){
        if(x == p)continue;
        if(ind[{v,x}] > ind[{v,p}]){
            dp[x] = dp[v];
        }
        else{
            dp[x] = 1 + dp[v];
        }
        dfs(x,v);
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,u,v;
        cin >> n;
        adj.assign(n,vector<int>());
        dp.assign(n,0);
        ind.clear();
        for(int i = 0 ; i < n-1; i++){
            cin >> u >> v;
            u--;v--;
            adj[u].push_back(v);
            adj[v].push_back(u);

            ind[{u,v}] = i;
            ind[{v,u}] = i;

        }
        ind[{0,-1}] = -1;
        dp[0] =1;
        dfs(0,-1);

        int res = *max_element(dp.begin(),dp.end());
        cout << res << "\n";
    }

    return 0;
}