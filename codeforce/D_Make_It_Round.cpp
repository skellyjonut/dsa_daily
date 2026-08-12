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
        ll n,m;
        cin >> n >> m;
        // ---- Your logic here ----
        ll two = 0;
        ll temp = n;
        while(n%2 == 0){
            two++;
            n=n/2;
        }
        ll f = 0;
        while(n%5 == 0){
            f++;
            n = n/5;
        }
        ll k = 1;
        while(two < f && k*2 <= m){
            k*=2;
            two++;
        }
        while(f < two && k*5 <= m){
            k*=5;
            f++;
        }
        while(k*10 <= m){
            k*=10;
        }
        if(k == 1){
            cout << temp*m << "\n";
        }
        else{
            k *= m/k;
            cout << k*temp << "\n";
        }
    }

    return 0;
}