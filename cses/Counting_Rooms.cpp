#include<bits/stdc++.h>
using namespace std;

pair<int,int> dir[] = {
    {1,0},{0,1},{-1,0},{0,-1}
};
int n,m;
void roomFnd(vector<string> &s,vector<vector<int>> &v,pair<int,int> p){
    int x = p.first;
    int y = p.second;

    if(s[x][y] == '#' || v[x][y])return;
    v[x][y] = 1;
    for(auto i:dir){
        int x1 = x+i.first;
        int y1 = y+i.second;

        if(x1 >= 0 && y1 >= 0 && x1 < n && y1 < m){
            roomFnd(s,v,{x1,y1});
        }
    }
    return;

}

int main(){
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    queue<int> q;
    vector<vector<int>> visited(n,vector<int>(m,0));
    int res = 0;
    for(int i = 0 ; i < n;i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '.' && visited[i][j] == 0){
                res++;
                roomFnd(v,visited,{i,j});
            }   
        }
    }
    cout << res;
}