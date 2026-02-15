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
        vector<int> x(n),y(n);
        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> y[i];
        }
        vector<pair<int,int>> mp(n);
        for(int i = 0 ; i < n; i++){
            mp[i].ff = y[i] - x[i];
            mp[i].ss = i;
        }
        sort(mp.begin(),mp.end());
        reverse(mp.begin(),mp.end());

        int r = n-1,cnt = 0;
        for(int i = 0 ; i < n; i++){
            while(r > i && mp[i].ff+mp[r].ff < 0)r--;
            if(i >= r)break;
            r--;
            cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}