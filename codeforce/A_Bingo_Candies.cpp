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
        vector<vector<int>> v(n,vector<int>(n));
        unordered_map<int,int> mp;
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < n; j++){
                cin >> v[i][j];
                mp[v[i][j]]++;
            }
        }
        int f = 1;
        for(auto i:mp){
            if(i.ss > n*n - n)f = 0;
        }
        if(f)cout << "YES" << "\n";
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}