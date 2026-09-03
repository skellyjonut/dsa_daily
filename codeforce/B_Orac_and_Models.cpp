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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> v(n+1);
        for (int i = 1; i <= n; i++)cin >> v[i];
        vector<ll> dp(n+1,1);
        for(int i = 2 ; i <= n; i++){
            for(int j = 1; j*j <= i; j++){
                if(i%j != 0)continue;
                if(v[i] > v[j])dp[i] = max(dp[i],dp[j]+1);
                int k = i/j;
                if(v[i] > v[k])dp[i] = max(dp[i],dp[k]+1);
            }
        }
        ll res = 1;
        for(auto i:dp){
            res = max(res,i);
        }
        cout << res << "\n";
    }

    return 0;
}