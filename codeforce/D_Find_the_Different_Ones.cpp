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
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        vector<int> p(n+1);
        p[1] = -1;
        for(int i = 2; i <= n; i++){
            if(v[i] != v[i-1]){
                p[i] = i-1;
            }
            else{
                p[i] = p[i-1];
            }
        }
        int q,a,b;
        cin >> q;
        for(int i = 0; i < q; i++){
            cin >> a >> b;
            if(p[b] >= a){
                cout << p[b] << " " << b << "\n";
            }
            else{
                cout << -1 << " " << -1 << "\n";
            }
        }
        cout << "\n";
    }   

    return 0;
}
