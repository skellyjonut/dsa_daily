#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;
vector<int> f;

bool check(int t,int n,int m){
    ll mx = 0;
    for(int i = 0 ; i < n; i++){
        if(f[i] >= t){
            mx+=t;
        }
        else{
            mx += f[i] + (t-f[i])/2;
        }
    }
    return mx >= m;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int m,n;
        cin >> n >> m;
        vector<int> v(m);
        f.assign(n,0);
        for (int i = 0; i < m; i++){
            cin >> v[i];
            f[v[i]-1]++;
        }

        ll l = 1, r = 2*m,res=r;
        while(l <= r){
            ll t = l + (r-l)/2;
            if(check(t,n,m)){
                r = t-1;
                res = t;
            }
            else{
                l = t+1;
            }
        }
        cout << res << "\n";
    }

    return 0;
}