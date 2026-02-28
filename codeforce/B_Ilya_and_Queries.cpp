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

    string s;
    cin >> s;
    int m,n=s.size();
    cin >> m;
    int l,r;
    vector<int> v(n+1,0);
    for(int i = 2; i <= n; i++){
        v[i] = v[i-1] + (s[i-2] == s[i-1]?1:0);
    }

    for(int i = 0; i < m; i++){
        cin >> l >> r;
        int res = v[r] - v[l];
        cout << res << "\n";
    }

    return 0;
}