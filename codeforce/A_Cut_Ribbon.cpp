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

    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int coins[] = {a,b,c};
    vector<int> dp(n+1,-1);
    dp[0] = 0;
    for(int i = 1; i <= n; i++){
        for(auto c:coins){
            if(i-c >= 0 && dp[i-c] != -1)dp[i] = max(dp[i],1 + dp[i-c]);
        }
    }
    cout << dp[n];

    return 0;
}