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
        ll n,k;
        cin >> n >> k;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        unordered_map<int,int> mp;
        vector<int> large(k+1,-1);
        vector<int> sec(k+1,-1);
        for(int i = 1; i <= n; i++){
            if(mp[v[i]] == 0){
                mp[v[i]] = i;
                large[v[i]] = i-1;
            }
            else{
                int new_val = i-mp[v[i]]-1;
                mp[v[i]] = i;
                if(new_val >= large[v[i]]){
                    sec[v[i]] = large[v[i]];
                    large[v[i]] = new_val;
                }
                else if(new_val > sec[v[i]]){
                    sec[v[i]] = new_val;
                }
                else{
                    continue;
                }
            }
        }
        for(auto i:mp){
            int col = i.ff;
            int lst = i.ss;
            int jmp = n-lst;
            if(jmp >= large[col]){
                sec[col] = large[col];
                large[col] = jmp;
            }
            else if(jmp >= sec[col]){
                sec[col] = jmp;
            }
            else{
                continue;
            }
        }
        int res = INT_MAX;
        for(int i = 1 ; i <= k; i++){
            int flr = large[i]/2;
            if(large[i]==-1)continue;
            else if(sec[i] == -1){
                res = min(res,flr);
            }
            else{
                int val = max(flr,sec[i]);
                res = min(res,val);
            }
            
        }
        cout << res << "\n";
    }

    return 0;
}