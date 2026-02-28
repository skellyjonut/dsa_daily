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
        ll prev=v[0];
        ll res = 1;
        for(int i = 1; i < n; i++){
            if(v[i] == prev || v[i] == prev+1){
                prev = v[i];
                continue;
            }
            prev = v[i];
            res++;
        }
        cout << res << "\n";

    }

    return 0;
}