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

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    ll res = 0;
    sort(v.begin(),v.end());
    for(int i = 0 ; i < n; i++){
        res += v[i];
    }
    ll mx = v[n-1];
    cout << max(res,2*mx);

    return 0;
}