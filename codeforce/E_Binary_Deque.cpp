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
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int res = -1;
        map<int,int> mp;
        mp[0] = -1;
        int sum = 0;
        for(int i = 0; i < n;i++){
            sum+=v[i];
            if(mp.count(sum-k)){
                res = max(res,i - mp[sum-k]);
            }
            if(!mp.count(sum)){
                mp[sum] = i;
            }
        }
        if(res == -1){
            cout << -1 << "\n";
        }
        else{
            cout << n-res << "\n";
        }
    }
    return 0;
}