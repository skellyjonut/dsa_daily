#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;
const int k = 1e5+1;

ll solve(vector<int> &v){
    sort(v.rbegin(),v.rend());
    ll ans = 0;
    int n = v.size();
    for(int i= 0,j = n-1; i < n; i++,j-=2){
        ans += 1LL*v[i]*j;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> v[i][j];
        }
    }

    vector<vector<int>> rows(k);
    vector<vector<int>> cols(k);

    for(int i = 0 ; i < n; i++){
        for(int j = 0 ; j < m ; j++){
            rows[v[i][j]].push_back(i);
            cols[v[i][j]].push_back(j);
        }
    }
    ll ans = 0;
    for(int c = 1; c < k; c++){
        ans += solve(rows[c]);
        ans += solve(cols[c]);
    }
    cout << ans << "\n";
    return 0;
}