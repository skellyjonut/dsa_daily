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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----

        stack<int> st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && st.top() == v[i]+1){
                st.pop();
            }
            st.push(v[i]);
        }
        cout << st.size() << "\n";
    }

    return 0;
}