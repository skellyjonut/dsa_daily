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
        if(n < 4){
            cout << n << "\n";
        }
        else{
            if(n%2 == 0){
                cout << 0 << "\n";
            }
            else{
                cout << 1 << "\n";
            }
        }

    }

    return 0;
}