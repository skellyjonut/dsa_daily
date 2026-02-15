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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll res = 0;
        for(int i = 0 ; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(j-i == v[j]*v[i])res++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}