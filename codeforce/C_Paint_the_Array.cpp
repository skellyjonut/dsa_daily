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
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll g1 = 0;
        for(int i =0; i < n; i+=2){
            g1 = gcd(g1,v[i]);
        }
        ll g2 = 0;
        for(int i =1; i < n; i+=2){
            g2 = gcd(g2,v[i]);
        }
        bool flag = true;
        for(int i = 1; i < n; i+=2){
            if(v[i]%g1 == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << g1 << "\n";
            continue;
        }
        flag = true;
        for(int i = 0; i < n; i+=2){
            if(v[i]%g2 == 0){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << g2 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }

    return 0;
}