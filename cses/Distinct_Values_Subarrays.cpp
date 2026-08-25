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

    int t = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];

        int l = 0,r=0,res=0;
        unordered_map<ll,ll> mp;
        while(r < n){
            mp[v[r]]++;
            if(mp[v[r]] >= 2){
                while(mp[v[r]] >= 2){
                    mp[v[l]]--;
                    l++;
                }
            }
            res += r-l+1;
            r++;
        }
        cout << res;
    }

    return 0;
}