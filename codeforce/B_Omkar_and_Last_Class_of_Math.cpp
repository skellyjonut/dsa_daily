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
        int f = 0;
        for(int i = 2; i*i <= n; i++){
            if(n%i == 0){
                int k = n/i;
                cout << k << " " << n-k << "\n";
                f = 1;
                break;
            }
        }
        if(!f){
            cout << 1 << " " << n-1 << "\n";
        }
    }

    return 0;
}