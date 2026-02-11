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
        vector<ll> v(n);
        unordered_map<ll,ll> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        set<ll> s;
        for(int i = 0; i < n; i++){
            mp[v[i]] = i;
            s.insert(v[i]); 
        }
        vector<ll> arr(s.begin(),s.end());
        ll res = -1;
        for(int i = 0; i < arr.size(); i++){
            for(int j = 0 ; j < arr.size() ; j++){
                if(gcd(arr[i],arr[j]) == 1)res=max(res,mp[arr[i]]+mp[arr[j]]+2);
            }
        }
        cout << res << "\n";
    }

    return 0;
}