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
        long long a,b;
        cin >> a >> b;
        if(b > a){
            swap(a,b);
        }
        if(a == b){
            cout << 0 << " " << 0 << "\n";
        }
        else{
            long long gcd = a -b;
            long long answer = min(b%gcd, gcd-(b%gcd));
            cout << gcd << " " << answer << "\n";
        }
    }

    return 0;
}