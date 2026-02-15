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
        for(int i = 0 ; i < n; i++)cin >>v[i];
        ll ans = 0;
        for(int i = 1; i <= 60; i++){
            ll k = 1LL << i;
            set<ll> st;
            for(int j =0; j < n; j++){
                st.insert(v[j]%k);
            }
            if(st.size() == 2){
                ans = k;
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}