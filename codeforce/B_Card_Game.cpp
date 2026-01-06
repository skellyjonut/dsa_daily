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
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int res = 0;
        if ((a1 > b1 && a2 >= b2) || (a1 >= b1 && a2 > b2)) res++;
        if ((a1 > b2 && a2 >= b1) || (a1 >= b2 && a2 > b1)) res++;
        if ((a2 > b1 && a1 >= b2) || (a2 >= b1 && a1 > b2)) res++;
        if ((a2 > b2 && a1 >= b1) || (a2 >= b2 && a1 > b1)) res++;
        cout << res << "\n";
    }

    return 0;
}