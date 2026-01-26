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
        int res = 1;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                res = n/i;
                break;
            }
        }
        cout << res << " " << n-res << "\n";
    }

    return 0;
}