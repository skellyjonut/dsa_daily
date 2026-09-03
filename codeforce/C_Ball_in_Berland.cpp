#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a,b,k,u;
        cin >> a >> b >> k;
        vector<int> v1(a),v2(b);
        for(int i = 0 ; i < k; i++){
            cin >> u;
            v1[u-1]++;
        }
        for(int i = 0 ; i < k; i++){
            cin >> u;
            v2[u-1]++;
        }
        ll ans =  1LL*k*(k-1)/2;

        for(ll i:v1){
            ans -= i*(i-1)/2;
        }
        for(ll i:v2){
            ans -= i*(i-1)/2;
        }
        cout << ans << "\n";
    }

    return 0;
}