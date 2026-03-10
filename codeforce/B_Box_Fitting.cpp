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
        int n,w;
        cin >> n >> w;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        vector<int> bit(21,0);
        for(int i = 0 ; i < n; i++){
            int val = log2(v[i]);
            bit[val]++;
        }
        int h = 0;
        int used = 0;
        while(used < n){
            int temp = w;
            for(int i = 20; i >= 0; i--){
                while(bit[i] > 0 && (1<<i) <= temp){
                    bit[i]--;
                    temp -= (1<<i);
                    used++;
                }
            }
            h++;
        }
        cout << h << "\n";
    }

    return 0;
}