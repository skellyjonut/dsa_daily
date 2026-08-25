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

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    int l = 0,r = 0;
    int res = 1;
    set<int> st;

    while(r < n){
        while(st.count(v[r])){
            st.erase(v[l]);
            l++;
        }
        st.insert(v[r]);
        res = max(res, r-l+1);
        r++;
    }

    cout << res << "\n";

    return 0;
}