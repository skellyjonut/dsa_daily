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
        int n,m,l;
        cin >> n >> m >> l;
        vector<ll> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        // ---- Your logic here ----
        multiset<ll> st;
        for(int i = 0; i < min(n+1,m); i++){
            st.insert(0);
        }
        ll cnt = 0;
        for(int i = 1; i <= l;i++){
            auto first = st.begin();
            ll smol = *first;
            st.erase(first);
            st.insert(smol+1);
            if(cnt < n && i == a[cnt]){
                auto last = prev(st.end());
                st.erase(last);
                st.insert(0);
                cnt++;
            }
            ll flash_left = n-cnt;
            if(st.size() > flash_left+1){
                auto first = st.begin();
                st.erase(first);
            }
        }
        cout << *st.begin() << "\n";
    }

    return 0;
}