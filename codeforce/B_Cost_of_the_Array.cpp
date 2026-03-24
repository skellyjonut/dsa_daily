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
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        if(k == n){
            int f = 1;
            int cnt = 1;
            for(int i = 1; i < n; i+=2){
                if(v[i] != cnt){
                    cout << cnt << "\n";
                    f = 0;
                    cnt++;
                    break;
                }
                cnt++;
            }
            if(f){
                cout << cnt << "\n";
            }
        }
        else{
            bool one = false;
            for(int i = 1 ; i < n-k+2; i++){
                if(v[i] > 1){
                    one = true;
                    break;
                }
            }
            if(one){
                cout << 1 << "\n";
            }
            else{
                cout << 2 << "\n";
            }
        }
    }

    return 0;
}