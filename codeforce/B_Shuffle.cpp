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
        ll n,x,m,l,r;
        cin >> n >> x >> m;
        ll l_max = 0,r_max = x;
        bool flag = true;
        ll res;
        for(int i = 0 ; i < m; i++){
            cin >> l >> r;
            if(flag){
                l_max = l, r_max = r;
                if(x >= l_max && x <= r_max){
                    flag = false;
                }
            }
            else{
                if(r < l_max || l > r_max){
                    continue;
                }
                else{
                    l_max = min(l,l_max);
                    r_max = max(r,r_max);
                }
            }
        }
        if(flag){
            cout << 1 << "\n";
        }
        else{
            cout << r_max - l_max + 1 << "\n";
        }
    }

    return 0;
}