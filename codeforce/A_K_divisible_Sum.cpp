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
        if(n == k) {
            cout << 1 << "\n";
        }
        else if(n == 1){
            cout << k << "\n";
        } 
        else if(n > k){
            if(n%k == 0)cout << 1 << "\n";
            else{
                cout << 2 << "\n";
            }
        }
        else{
            if(k%n == 0){
                cout << k/n << "\n";
            }
            else{
                cout << (k+n-1)/n << "\n";
            }
        }
    }
    return 0;
}