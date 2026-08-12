#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    
    vector<vector<int>> adj;
    vector<int> vis;
    int n,m,u,v;
    cin >> n >> m;
    vector<int> par(n+1,0);
    adj.resize(n+1);
    vis.assign(n+1,0);
    for(int i = 0 ; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    queue<int> q;
    q.push(1);
    vis[1] = 1;

    while(!q.empty()){
        int curr = q.front();
        q.pop();

        if(curr == n)break;

        for(int ne:adj[curr]){
            if(!vis[ne]){
                vis[ne] = 1;
                par[ne]=curr;
                q.push(ne);
            }
        }
    }
    if(vis[n] != 1){
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> path;
    int curr = n;
    while(curr != 0){
        path.push_back(curr);
        curr = par[curr];
    }
    reverse(path.begin(),path.end());
    cout << path.size() << "\n";
    for(auto i:path){
        cout << i << " ";
    }

    return 0;
}