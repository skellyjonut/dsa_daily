#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
pair<int,int> dir[] = {{1,0},{0,1},{-1,0},{0,-1}};
char dirn[] = {'D','R','U','L'};

//BFS always finds the shortest distance in a maze grid prblm


int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n,m;
    cin >> n >> m;
    vector<string> v(n);
    pair<int,int> st,en;
    vector<vector<int>> vis(n,vector<int>(m,0));
    vector<vector<pair<int,int>>> par(n,vector<pair<int,int>>(m,{-1,-1}));
    vector<vector<char>> mov(n,vector<char>(m));

    for(int i = 0 ; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == 'A')st = {i,j};
            if(v[i][j] == 'B')en = {i,j};
            if(v[i][j] == '#')vis[i][j] = 1;
        }
    }
    queue<pair<int,int>> q;

    q.push(st);
    vis[st.first][st.second] = 1;
    while(!q.empty()){
        auto [x,y] = q.front();
        q.pop();

        for(int i = 0 ; i < 4; i++){
            int nx = x+dir[i].first;
            int ny = y+dir[i].second;

            if(nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny]){
                vis[nx][ny] = 1;
                par[nx][ny] = {x,y};
                mov[nx][ny] = dirn[i];
                q.push({nx,ny});
            }
        }
    }
    if(!vis[en.first][en.second]){
        cout << "NO";
    }
    else{
        string path = "";
        pair<int,int> cur = en;
        while(cur != st){
            path+=mov[cur.first][cur.second];
            cur = par[cur.first][cur.second];
        }
        reverse(path.begin(),path.end());
        cout << "YES\n";
        cout << path.size() << "\n";
        cout << path << "\n";
    }

    return 0;
}