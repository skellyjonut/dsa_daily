#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

bool isPerfectLog(double x){
    double val = log(x)/log(2);
    return fabs(val - round(val)) < 1e-9;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll a,b,aa,bb;
        cin >> a >> b;
        aa =a;
        bb =b;
        while(aa%2 == 0)aa/=2;
        while(bb%2 == 0)bb/=2;
        if(aa != bb)cout << -1 << "\n";
        else{
            a = a/aa;
            b = b/bb;
            a = log2(a);
            b = log2(b);

            ll ans = ceil(abs(a-b)/3.0);
            cout << ans << "\n";
        }
    }

    return 0;
}