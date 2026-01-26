#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;

        if(s > k){
            m = m%(2*k);
            if(m < k){
                cout << s-m << "\n";
            }
            else{
                cout << k-(m-k) << "\n";
            }
        }
        else{
            m = m%k;
            if(m >= s){
                cout << 0 << "\n";
            }
            else{
                cout << s-m << "\n";
            }
        }
    }
    return 0;
}
