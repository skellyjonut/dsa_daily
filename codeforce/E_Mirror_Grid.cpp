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
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            for(int j=0;j<n;j++){
                v[i][j] = s[j] - '0';
            }
        }
        int res = 0;
        for(int i = 0 ;i < n; i++){
            for(int j = 0; j < n; j++){
                int same = 0;
                if(v[i][j] == v[j][n-1-i])same++;
                if(v[i][j] == v[n-1-i][n-1-j])same++;
                if(v[i][j] == v[n-1-j][i])same++;
                if(same == 1 || same == 2){
                    if(v[i][j] != v[j][n-1-i])v[j][n-1-i] = v[i][j];
                    if(v[i][j] != v[n-1-i][n-1-j])v[n-1-i][n-1-j] = v[i][j];
                    if(v[i][j] != v[n-1-j][i])v[n-1-j][i] = v[i][j];
                    res+=(4-(same+1));
                }
                else if(same == 0){
                    v[i][j] = v[j][n-1-i];
                    res++;
                }
                else{
                    continue;
                }
            }
        }
        cout << res << "\n";
    }

    return 0;
}