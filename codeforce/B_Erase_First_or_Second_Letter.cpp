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
        string s;
        cin >> s;
        
        map<char,ll> mp;
        vector<ll> dis(n,0);
        ll cnt = 0;
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
            if(mp[s[i]] == 1){
                cnt++;
            }
            dis[i] = cnt;
        }
        ll res = 0;
        for(int i = 0 ; i < n; i++){
            res+=dis[i];
        }
        cout << res << "\n";
    }

    return 0;
}