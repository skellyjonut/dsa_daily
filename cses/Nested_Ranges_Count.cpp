#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template <class T>
using ordered_multiset = tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;


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

    int n,a,b;
    cin >> n;
    vector<pair<pair<int,int>,int>> v;
    for(int i = 0 ; i < n; i++){
        cin >> a >> b;
        pair<pair<int,int>,int> p = {{a,-b},i};
        v.push_back(p);
    }

    sort(v.begin(),v.end());
    vector<int> A(n,0),B(n,0);

    ordered_multiset<int> st;
    for(int i = 0 ; i < n; i++){
        auto p = v[i];
        int r = -p.ff.ss;
        int idx = p.ss;

        int lb = st.order_of_key(r);
        B[idx] = int(st.size())-lb;
        st.insert(r);
    }
    st.clear();
    for(int i = n-1; i >= 0; i--){
        auto p = v[i].ff;
        int r = -p.ss;
        int idx = v[i].ss;

        int ub = st.order_of_key(r+1);
        A[idx] = ub;
        st.insert(r);
    }

    for(auto i:A){
        cout << i << " ";
    }
    cout << "\n";

    for(auto i:B){
        cout << i << " ";
    }
    cout << "\n";


    return 0;
}
