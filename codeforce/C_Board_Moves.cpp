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
        long long n;
        cin >> n;
        long long res = 0;
        long long k = 8;
        if(n == 1){
            cout << 0 << "\n";
        }
        else{
            for(int i = 0; i < n/2; i++){
                res+=((i+1)*k);
                k+=8;
            }
            cout << res << "\n";
        }
    }

    return 0;
}
