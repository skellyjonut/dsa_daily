#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

ll red=0,white=0;

void dfs(int node,int color,vector<vector<int>>& adj,vector<int>& vis){
    queue<int> q;
    vis[node]++;
    if(color == 1)red++;
    else{
        white++;
    }
    for(int i:adj[node]){
        if(!vis[i]){
            dfs(i,1-color,adj,vis);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<vector<int>> adj(n,vector<int>());
    vector<int> visited(n,0);
    for(int i = 0 ; i < n-1; i++){
        int u,v;cin>>u>>v;
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,0,adj,visited);
    cout << 1LL*red*white - (n-1);

    return 0;
}