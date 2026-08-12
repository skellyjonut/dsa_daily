#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    

    int n,m,u,v;
    cin >> n >> m;
    vector<vector<int>> adj(n+1);
    for(int i = 0 ; i < m; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> color(n+1,0);
    for(int i = 1; i <= n; i++){
        if(color[i] != 0)continue;
        queue<int> q;
        q.push(i);
        color[i] = 1;
        while(!q.empty()){
            int u = q.front();
            q.pop();
            for(int v:adj[u]){
                if(color[v] == 0){
                    color[v] = 3 - color[u];
                    q.push(v);
                }
                else if(color[u] == color[v]){
                    cout << "IMPOSSIBLE";
                    return 0;
                }
            }
        }
   }
   
   for(int i = 1; i <= n;i++){
    cout << color[i] << " ";
   }

    return 0;
}