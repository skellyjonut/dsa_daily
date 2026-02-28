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
        ll x,y;
        cin >> x >> y;
        if(y >= 0){
          ll x_curr = x - (y*2);
            if(x_curr < 0 || x_curr%3 != 0)cout << "NO" << "\n";
            else{
                cout << "YES" << "\n";
            }  
        }
        else{
            ll x_curr = x - abs(y)*4;
            if(x_curr < 0 || x_curr%3 != 0)cout << "NO" << "\n";
            else{
                cout << "YES" << "\n";
            }
        }
        
    }

    return 0;
}