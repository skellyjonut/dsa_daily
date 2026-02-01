#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n; j++){
            set<int> s;
            for(int r = 0; r < j;r++){
                s.insert(v[i][r]);
            }
            for(int r = 0; r < i;r++){
                s.insert(v[r][j]);
            }
            int cnt = 0;
            while(s.count(cnt)){
                cnt++;
            }
            v[i][j] = cnt;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
}