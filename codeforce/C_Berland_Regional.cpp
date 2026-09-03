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
        ll n;
        cin >> n;
        vector<ll> u(n),s(n);
        for(int i = 0 ; i < n; i++)cin >> u[i];
        for(int i = 0; i < n; i++)cin >> s[i];

        vector<vector<ll>> sk(n);
        for(int i = 0 ; i < n; i++){
            sk[u[i]-1].push_back(s[i]);
        }

        for(auto &v:sk){
            sort(v.begin(),v.end());
        }

        vector<vector<ll>> pfx(n,vector<ll>(1,0));
        for(int i  = 0 ; i < n; i++){
            for(int j =0 ; j < sk[i].size(); j++){
                pfx[i].push_back(pfx[i].back()+sk[i][j]);
            }
        }


        vector<ll> ans(n+1);
        for(int i = 0 ; i < n; i++){
            int nums = sk[i].size();
            for(int k = 1; k <= nums ;k++){
                ans[k] += pfx[i].back() - pfx[i][nums%k];
            }   
        }  
        for(int i = 1 ; i <= n; i++){
            cout << ans[i] << " ";
        } 
        cout << "\n";
    }

    return 0;
}

