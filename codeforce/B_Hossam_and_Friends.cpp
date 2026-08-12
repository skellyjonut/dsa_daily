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
        ll n,m,a,b;
        cin >> n >> m;
        vector<ll> v(n+1,0);
        for(int i = 0 ; i  < m; i++){
            cin >> a >> b;
            if(a > b)swap(a,b);
            v[b] = max(v[b],a);
        }
        vector<ll> left(n+1);
        left[1] = 1;
        ll res = 1;

        for(int i = 2; i <= n; i++){
            left[i] = max(left[i-1],v[i]+1);

            res += i - left[i]+1;
        }
        cout << res << "\n";
    }

    return 0;
}