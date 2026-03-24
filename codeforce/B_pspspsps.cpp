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
        if(s[0] == 's')s[0]='.';
        if(s[n-1] == 'p')s[n-1]='.';
        set<char> st;
        for(int i = 0 ; i <n;i++){
            if(s[i] != '.')st.insert(s[i]);
        }
        if(st.size() <= 1)cout << "YES\n";
        else{
            cout << "NO\n";
        }
    }

    return 0;
}