#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int M = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp(n+1,0);
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int  j = 1; j <= 6; j++){
            if(i - j >= 0)dp[i] = (dp[i] + dp[i-j])%M;
        }
    }
    cout << dp[n];

    return 0;
}