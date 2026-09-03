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

    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        vector<int> v = {a,b,c};
        sort(v.begin(),v.end());
        int res = min(v[2]-v[1],v[1]-v[0]);
        cout << res << "\n"; 
    }

    return 0;
}