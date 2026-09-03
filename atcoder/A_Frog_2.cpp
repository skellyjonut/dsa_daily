#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
const int INF = 1e9+5;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    vector<int> dp(n,INF);
    dp[0] = 0;
    for(int i = 0 ; i < n; i++){
        for(int j = i+1 ; j <= i+k; j++){
            if(j < n){
                dp[j] = min(dp[j],dp[i] + abs(v[j]-v[i]));
            }
        }
    }
    cout << dp[n-1];
    return 0;
}