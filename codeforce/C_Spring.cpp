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
        ll a,b,c,n;
        cin >> a >> b >> c >> n;
        ll vala = n/a;
        ll valb = n/b;
        ll valc = n/c;

        ll ab = n/lcm(a,b);
        ll ac = n/lcm(a,c);
        ll bc = n/lcm(b,c);

        ll abc = n/lcm(a,lcm(b,c));

        ll resa = abc*2 + (ab+ac - 2*abc)*3 + (vala-(ab+ac - 2*abc)-abc)*6;
        ll resb = abc*2 + (bc+ab - 2*abc)*3 + (valb-(bc+ab - 2*abc)-abc)*6;
        ll resc = abc*2 + (ac+bc - 2*abc)*3 + (valc-(ac+bc - 2*abc)-abc)*6;
        cout << resa << " " << resb << " " << resc << "\n";
    }

    return 0;
}