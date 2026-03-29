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
        ll n;
        cin >> n;
        ll x = 9;
        ll skipped = 0;
        for(int i = 1; true; i++){
            if(n > i*x){
                n-= i*x;
                skipped+=x;
            }
            else{
                ll skip = (n-1)/i;
                skipped+=skip;
                n-=skip*i;

                ll x = skipped+1;
                cout << to_string(x)[n-1] << "\n";
                break;
            }
            x*=10;
        }
    }
        
    return 0;
}