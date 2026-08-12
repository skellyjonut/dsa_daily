#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    vector<int> coin(n);
    for(int i = 0 ; i < n; i++)cin >> coin[i];
    vector<int> dp(k+1,0);
    dp[0] = 1;
    for(int i = 1; i <= k; i++){
        for(auto c:coin){
            if(i - c >= 0){
                dp[i] = (dp[i]+dp[i-c])%M;
            }
        }
    }
    cout << dp[k];

    return 0;
}