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

    int x,n,a;
    cin >> x >> n;
    multiset<int> st;
    set<int> l;
    l.insert(0);
    l.insert(x);
    for(int i = 0 ; i < n; i++){
        cin >> a;
        l.insert(a);
        auto lb = l.lower_bound(a);
        lb--;
        auto ub = l.upper_bound(a);
        if(st.empty()){
            st.insert(a-*lb);
            st.insert(*ub-a);
        }
        else{
            st.erase(st.find(*ub-*lb));
            st.insert(a-*lb);
            st.insert(*ub-a);
        }
        cout << *st.rbegin() << " ";
    }

    return 0;
}