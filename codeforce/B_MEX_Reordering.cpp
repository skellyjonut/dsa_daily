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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        unordered_map<int,int> mp;
        for(auto i:v){
            mp[i]++;
        }
        if(mp[0] == 0)cout << "NO" << "\n";
        else if(mp[0] == 1)cout << "YES" << "\n";
        else if(mp[0] >= 2 && mp[1] != 0)cout << "YES" << "\n";
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}