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
        int n;
        cin >> n;

        vector<int> v(n);
        unordered_map<int,int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int mex = 0;
        auto it = find(v.begin(),v.end(),0);
        int cnt = 1;
        
        int prev = v[0];
        for(int i = 1; i < n; i++){
            if(v[i] == prev+1){
                cnt++;
                mex = max(mex,cnt);
            }
            else{
                cnt=1;
           }
            prev = v[i];
        }
        mex = max(mex,cnt);
        cout << mex << "\n";
    }
    return 0;
}