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
        vector<int> v(n);
        set<int> st;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            st.insert(v[i]);
        }
        ll l = 0;
        ll r = n-1;
        while(l != r){
            bool flag = false;
            int mn = *st.begin();
            int mx = *st.rbegin();
            if(v[l] != mn && v[l] != mx)flag = true;
            if(flag){
                if(v[r] != mn && v[r]!=mx)break;
                else{
                    st.erase(v[r]);
                    r--;
                }
            }
            else{
                st.erase(v[l]);
                l++;
            }
        }
        if(l == r){
            cout << -1 << "\n";
        }
        else{
            cout << l+1 << " " << r+1 << "\n";
        }
    }

    return 0;
}