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

    ll t;
    cin >> t;   
    while(t--) {
        string s;
        cin >> s;
        int c=0;
        stack<char> st;
        for(auto i:s){
            if(st.empty())st.push(i);
            else if(st.top() == i){
                st.push(i);
            }
            else{
                st.pop();
                c++;
            }
        }
        cout << (c%2 == 0?"NET":"DA") << "\n";
    }
    return 0;
}