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
        ll n,k,a,res = INT_MAX;
        cin >> n >> k;
        vector<ll> v(n);
        vector<ll> bits(31,0);
        for (int i = 0; i < n; i++) {
            cin >> a;
            res &= a;
            for(int i = 0; i < 31; i++){
                if(a&(1<<i))bits[i]++;
            }
        }
        ll ind = 30;
        while(k >= n && ind >= 0){
            if(bits[ind] == n){
                ind--;
                continue;
            }
            res = res | (1 << ind);
            k-= (n-bits[ind]);
            bits[ind] = n;
            ind--;
        }
        for(int i = 30; i >= 0; i--){
            if(bits[i] == n)continue;
            if(bits[i] + k >= n){
                k -= (n - bits[i]);
                res = res | (1<<i);
            }
        }
        cout << res << "\n";
    }

    return 0;
}