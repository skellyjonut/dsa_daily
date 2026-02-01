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
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<ll> c(n);
        for (int i = 0; i < n; i++) {
            cin >> c[i];
        }
        int res = 0;
        int a1 = 0;
        while(a1 < n && (a[a1]&(~x)) == 0){
            if(res == x)break;
            res = res|a[a1];
            a1++;
        }
        int b1 = 0;
        while(b1 < n && (b[b1]&(~x)) == 0){
            if(res == x)break;
            res = res|b[b1];
            b1++;
        }
        int c1 = 0;
        while(c1 < n && (c[c1]&(~x)) == 0){
            if(res == x)break;
            res = res|c[c1];
            c1++;
        }
        if(res == x){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }

    }

    return 0;
}