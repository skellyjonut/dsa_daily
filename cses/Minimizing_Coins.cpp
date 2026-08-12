#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
const int INF = 1e9;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    vector<int> dp(k+1,INF);
    dp[0] = 0;

    for(int i = 1 ;i <= k ; i++){
        for(auto c:v){
            if(i - c >= 0 && dp[i-c] != INF){
                dp[i] = min(dp[i],dp[i-c]+1);
            }
        }
    }
    if(dp[k] == INF){
        cout << -1;
    }
    else{
        cout << dp[k];
    }


    return 0;
}