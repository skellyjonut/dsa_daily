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
        ll n,m,h,a,b;
        cin >> n >> m >> h;
        vector<int> v(n);
        unordered_map<int,int> mp;
        vector<int> back(n);
        for(int i = 0; i < n; i++)cin>>v[i];
        back = v;
        for(int i = 0 ;i < m; i++){
            cin >> a >> b;
            mp[a-1]+=b;
        }
        for(int i = 0; i < n; i++){
            v[i]+= (h-v[i])%
        }
        cout << "\n";

    }

    return 0;
}