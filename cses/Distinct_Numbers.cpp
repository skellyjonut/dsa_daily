#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<int,int> mp;
    int t;
    cin >> t;
    set<int> st;
    int a;
    for(int i = 0; i < t;i++){
        cin >> a;
        st.insert(a);
    }
    cout <<st.size();

    return 0;
}