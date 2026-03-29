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

    int n,m;
    cin >> n >> m;
    vector<int> v(n),arr(m);
    multiset<int> st;
    for(int i = 0 ; i < n; i++){
        cin>>v[i];
        st.insert(v[i]);
    }
    for(int i = 0 ; i < m; i++)cin>>arr[i];

    for(int i = 0 ; i < m; i++){
        auto it = st.upper_bound(arr[i]);
        if(it == st.begin()){
            cout << -1 << "\n";
        }
        else{
            it--;
            cout << *it << "\n";
            st.erase(it);
        }
    }
    return 0;
}