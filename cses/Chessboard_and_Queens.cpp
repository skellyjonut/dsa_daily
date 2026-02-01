#include<bits/stdc++.h>
using namespace std;
long long ans = 0;


void place(int row, vector<string> &grid){
    if(row == 8){
        ans++;
        return;
    }
    for(int i = 0; i < 8; i++){
        if(grid[row][i] == '.'){
            bool attacked = false;
            for(int r = 0; r < row; r++){
                if(grid[r][i] == 'Q'){
                    attacked = true;
                    break;
                }
            }
            for(int r = row-1,c = i-1;r >= 0 && c >= 0;r--,c--){
                if(grid[r][c] == 'Q'){
                    attacked = true;
                    break;
                }
            }
            for(int r = row-1,c = i+1;r >= 0 && c < 8;r--,c++){
                if(grid[r][c] == 'Q'){
                    attacked = true;
                    break;
                }
            }
            if(!attacked){
                grid[row][i] = 'Q';
                place(row+1,grid);
                grid[row][i] = '.';  
            }
        }
    }
}


int main(){
    vector<string> grid;
    string s;
    for(int i =0; i < 8;i++){
        cin >> s;
        grid.push_back(s);
    }
    place(0,grid);
    cout << ans;
}