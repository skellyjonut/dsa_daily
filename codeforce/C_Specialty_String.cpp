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
        string s;
        cin >> s;
        stack<char> st;
        for(int i = 0 ; i < n; i++){
            if(!st.empty() && s[i] == st.top())st.pop();
            else{
                st.push(s[i]);
            }
        }
        if(st.empty())cout << "YES" <<"\n";
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}