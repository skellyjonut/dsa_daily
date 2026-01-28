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

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        int negcnt = 0,res = 0;
        int min_val = INT_MAX;
        vector<vector<int>> v(n,vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(v[i][j] < 0)negcnt++;
                min_val = min(min_val,abs(v[i][j]));
                res+=abs(v[i][j]);
            }
        }
        if(negcnt%2 == 0)cout << res << "\n";
        else{
            cout << res-2*min_val << "\n";
        }
    }

    return 0;
}