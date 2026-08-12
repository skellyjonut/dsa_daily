#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
vector<vector<int>> adj;
vector<int> vis;
int comp = 0;
// To find the number of components in a graph, repeatedly run dfs on all the vertex and increment upon encountering a vertex
//which is not visited
vector<int> res;
void dfs(int u){
    if(!vis[u]){
        vis[u] = 1;
        for(int v:adj[u]){
            if(!vis[v]){
                dfs(v);
            }
        }
    }
}

int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    
    int n,m,u,v;
    cin >> n >> m;
    adj.resize(n+1);
    vis.assign(n+1,0);
    for(int i = 0 ; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> res;
    for(int i = 1; i <=n;i++){
        if(!vis[i]){
            res.push_back(i);
            dfs(i);
        }
    }

    cout << res.size()-1 << "\n";
    if(res.size() == 1)return 0;
    for(int i = 0 ; i < res.size()-1; i++){
        cout << res[i] << " " << res[i+1] << "\n";
    }

    return 0;
}