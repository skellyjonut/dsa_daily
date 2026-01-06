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
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum+=v[i];
        }

        // ---- Your logic here ----
        int cnt = 0;
        long long mx = 0;
        long long res = 0;
        for(int i = 0; i < n; i++){
            mx=max(mx,1LL*v[i]); 
            res+=v[i];
            if(mx == (res-mx))cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}