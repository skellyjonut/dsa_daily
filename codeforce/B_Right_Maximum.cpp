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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        multiset<ll> ms;
        for(int i = 0 ; i < n; i++){
            ms.insert(v[i]);
        }
        ll res = 0;
        for(int i = n-1; i >= 0; i--){
            if(v[i] == *ms.rbegin())res++;
            auto it = ms.find(v[i]);
            ms.erase(it);
        }
        cout << res << "\n";
    }

    return 0;
}