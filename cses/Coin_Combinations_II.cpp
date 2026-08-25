#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    vector<int> dp(x+1,0);
    dp[0] = 1;

    for(auto c:v){
        for(int i = c; i <= x; i++){
            dp[i] = (dp[i] + dp[i-c])%M;
        }
    }   

    cout << dp[x] << "\n";

    return 0;
}