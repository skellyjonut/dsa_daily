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
        ll n,k,b,s;
        cin >> n >> k >> b >>s;
        // ---- Your logic here ----
        // n - number of element, k dividin value, b - beauty of the array, s- sum of the elements;
        ll m = s - (k*b);
        if(m < 0 || m > n*(k-1)){
            cout << -1 << "\n";
        }
        else{
            vector<ll> v(n,0);
            v[n-1] = b*k;
            ll r = s-(k*b);
            ll it = 0;
            while(r > 0){
                v[it++] += min(r,(k-1));
                r-=(k-1);
            }
            for(auto i:v){
                cout << i << " ";
            }
            cout << "\n";
        }
    }   

    return 0;
}