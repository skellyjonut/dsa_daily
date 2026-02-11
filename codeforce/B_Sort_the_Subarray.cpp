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
        int n,l = 0,r = 0;
        cin >> n;

        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<ll> q(n);
        for (int i = 0; i < n; i++) {
            cin >> q[i];
        }
        for(int i = 0; i < n; i++){
            if(v[i] != q[i]){
                l = i;
                break;
            }
        }
        for(int i = n-1 ; i >= 0; i--){
            if(v[i] != q[i]){
                r = i; 
                break;
            }
        }
        ll sm = q[l],bg = q[r];
        
        while(l-1 >= 0 && v[l-1] <= sm){
            sm = v[l-1];
            l--;
        }
        while(r+1 < n && v[r+1] >= bg){
            bg = v[r+1];
            r++;
        }
        cout << l+1 << " " << r+1 << "\n";
    }

    return 0;
}