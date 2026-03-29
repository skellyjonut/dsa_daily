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

    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(n),app(m);
    for(int i = 0 ; i < n; i++)cin >> v[i];
    for(int i = 0 ; i < m; i++)cin >> app[i];

    sort(v.begin(),v.end());
    sort(app.begin(),app.end());
    int l = 0,r=0;

    int res = 0;
    while(l < n && r < m){
        if(abs(v[l]-app[r]) <= k){
            res++;
            l++;
            r++;
        }
        else if(v[l] < app[r]){
            l++;
        }
        else{
            r++;
        }
    }
    cout << res << "\n";

    return 0;
}