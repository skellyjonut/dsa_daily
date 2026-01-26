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
        int n,s,x;
        cin >> n >> s >> x;
        vector<int> v(n);
        ll res = 0;
        for(int i =0; i < n; i++){
            cin >> v[i];
            res+=v[i];
        }
        ll ans = s - res;
        if(ans < 0 || ans%x != 0){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }
    }

    return 0;
}