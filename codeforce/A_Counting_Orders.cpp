#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
int M = 1e9+7;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i =0; i < n; i++)cin>>a[i];
        for(int i =0; i < n; i++)cin>>b[i];
        ll res = 1;
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());
        for(int i =0; i < n; i++){
            auto it = lower_bound(a.begin(),a.end(),b[i]+1);
            int j = it - a.begin();
            int val = n-j-i;
            res = (res*((max(0,val))%M))%M;
        }
        cout << res << "\n";
    }

    return 0;
}