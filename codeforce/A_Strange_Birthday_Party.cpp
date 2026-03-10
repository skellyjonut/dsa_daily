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
        ll n,m;
        cin >> n >> m;
        vector<ll> v(n),c(m+1);
        for(int i = 0 ; i < n; i++)cin>>v[i];
        for(int i = 1; i <= m; i++)cin >> c[i];
        
        //code
        ll cnt = 1;
        ll tot = 0;
        sort(v.rbegin(),v.rend());
        for(int i = 0 ; i < n; i++){
            if(v[i] > cnt){
                tot += c[cnt];
                cnt++;  
            }
            else{
                tot += c[v[i]];
            }
        }
        cout << tot << "\n";
    }

    return 0;
}