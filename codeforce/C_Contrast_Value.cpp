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
        for (int i = 0; i < n; i++)cin >> v[i];
        ll con=0;
        for(int i = 1; i < n; i++){
            con+=abs(v[i-1]-v[i]);
        }
        ll val = v[0];
        ll res = 1;
        int dir = 0;
        for(int i = 1 ; i < n; i++){
            if(v[i] == v[i-1])continue;
            int newdir = (v[i] > v[i-1])?1:-1;
            if(dir == 0){
                res++;
                dir = newdir;
            }
            else if(dir != newdir){
                res++;
                dir = newdir;
            }
        }
        cout << res << "\n";
    }

    return 0;
}