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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        unordered_map<ll,ll> mp;
        set<ll> st;
        ll sum = v[0];
        st.insert(v[0]);
        bool flag = false;
        for(int i = 1 ; i < n;i++){
            if(i%2 == 1){
                sum-=v[i];
            }
            else{
                sum+=v[i];
            }
            if(sum == 0 || st.count(sum)){
                flag = true;
                break;
            }
            st.insert(sum);
        }
        if(flag)cout << "YES" << "\n";
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}