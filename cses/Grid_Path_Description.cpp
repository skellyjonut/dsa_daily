#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

string s;

ll ans = 0;
vector<pair<int,int>> dirs = {{0,1},{-1,0},{0,-1},{1,0}};
string turn = "RULD";
const int N = 7;
bool vis[N][N];

bool isEmpty(int r,int c){
    return (0 <= min(r,c) && max(r,c) < N && !vis[r][c]);
}

void dfs(int x,int y,int i){
    if(x == N - 1 && y == 0 && i != N*N - 1)return;
    if(x >= 1 && y >= 1 && isEmpty(x-1,y) && isEmpty(x,y-1) && !isEmpty(x-1,y-1))return;

    if(x >= 1 && y < N-1 && isEmpty(x-1,y) && isEmpty(x,y+1) && !isEmpty(x-1,y+1))return;

    if(x < N-1 && y >= 1 && isEmpty(x,y-1) && isEmpty(x+1,y) && !isEmpty(x+1,y-1))return;

    if(x < N-1 && y < N-1 && isEmpty(x+1,y) && isEmpty(x,y+1) && !isEmpty(x+1,y+1))return;

    if(isEmpty(x-1,y) && isEmpty(x+1,y) && !isEmpty(x,y-1) && !isEmpty(x,y+1)){
        return;
    }
    if(!isEmpty(x-1,y) && !isEmpty(x+1,y) && isEmpty(x,y-1) && isEmpty(x,y+1)){
        return;
    }
    if(x == N-1 && y == 0){
        if(i != N*N - 1)return;
        ans++;
        return;
    }
    for(int j = 0; j < 4; j++){
        if(s[i] != '?' && s[i] != turn[j])continue;
        int r = x+dirs[j].ff;
        int c = y+dirs[j].ss;
        if(0 <= min(r,c) && max(r,c) < N && !vis[r][c]){
            vis[r][c] = true;
            dfs(r,c,i+1);
            vis[r][c] = false;
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> s;
    vis[0][0] = true;
    dfs(0,0,0);
    cout << ans << "\n";
    return 0;
}