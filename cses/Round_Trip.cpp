#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;
vector<vector<int>> adj;
vector<int> par,vis,res;

void dfs(int x,int p){
    vis[x] = 1;
    for(auto u:adj[x]){
        if(u == p)continue;
        if(vis[u]){
            int ini = u;
            res.push_back(ini);

            int cur = x;
            while(cur != ini){
                res.push_back(cur);
                cur = par[cur];
            }
            res.push_back(ini);
            return;
        }
        par[u] = x;
        dfs(u,x);
        if(!res.empty())return;
    }   
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,u,v;
    cin >> n >> m;
    adj.resize(n+1);
    par.resize(n+1);
    vis.resize(n+1);
    for(int i = 0 ; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    par[0] = -1;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i,0);
            if(!res.empty())break;
        }
    }
    if(res.size() == 0){
        cout << "IMPOSSIBLE";
    }
    else{
        cout << res.size() << "\n";
        for(auto i:res)cout << i << " ";
    }

    return 0;
}