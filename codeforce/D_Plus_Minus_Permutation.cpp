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
        ll n,x,y;
        cin >> n >> x >> y;
        if(x == y){
            cout << 0 << "\n";
        }
        else{
            ll pos_x = n/x;
            ll pos_y = n/y;
            ll res = 0;
            ll lcm = (x/gcd(x,y))*y;
            ll com = n/lcm;

            pos_x-=com;
            pos_y-=com;

            ll tot = n*(n+1)/2;
            ll new_x = n - pos_x;
            ll sumLarge = tot - (new_x*(new_x+1)/2);
            ll sumSmall = pos_y*(pos_y+1)/2;
            res = sumLarge-sumSmall;
            cout << res << "\n";
        }
    }

    return 0;
}