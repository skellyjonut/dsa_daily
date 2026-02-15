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
        ll p,q;
        cin >> p >> q;
        if(3*p == 2*q)cout << "Bob" << "\n";
        else if(p >= q)cout << "Alice" << "\n";
        else{
            ll dif = q-p;
            if(p > 2*dif && q > 3*dif){
                cout << "Bob" << "\n";
            }
            else{
                cout << "Alice" << "\n";
            }
        }
    }

    return 0;
}