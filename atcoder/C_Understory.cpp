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

    int n,q,h;
    cin >> n;

    multiset<ll> st;
    for(int i = 0 ;  i < n; i++){
        cin >> q >> h;
        if(q == 1)st.insert(h);
        else{
            auto it = st.upper_bound(h);
            st.erase(st.begin(),it);
        }
        cout << st.size() << "\n";
    }

    return 0;
}