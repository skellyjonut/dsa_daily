#include<bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin >> n;
    long long m = 1e9+5;
    vector<pair<int,int>> dirn = {{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{-2,-1},{-2,1},{2,-1}};
    vector<vector<int>> v(n,vector<int>(n,m));
    v[0][0] = 0;
    vector<pair<int,int>> q;
    q.emplace_back(0,0);

    for(int i =0 ; i < (int)q.size(); i++){
        auto [row,col] = q[i];
        for(auto i:dirn){
            int x = i.first;
            int y = i.second;
            int r2 = x+row;
            int c2 = y+col;
            if(0 <= min(r2,c2) && max(r2,c2) < n && v[r2][c2] == m){
                v[r2][c2] = v[row][col] + 1;
                q.emplace_back(r2,c2);
            }
        }
    }

    for(int i =0; i < n; i++){
        for(int j=0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}