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
        for(int i = 0; i < n; i++)cin>>v[i];
        ll win = 1;
        ll l_val = v[n-1];
        ll l = n-1;
        ll res = 0;
        while(l >= 0 && v[l] == v[n-1]){
            l--;
        }
        if(l == -1){
            cout << 0 << "\n";
            continue;
        }
        while(l >= 0){
            l-=(n-1 - l);
            res++;
            while(l >= 0 && v[l] == v[n-1]){
                l--;
            }
        }
        cout << res << "\n";
    }

    return 0;
}