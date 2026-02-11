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
        ll n,c;
        cin >> n >> c;

        vector<ll> a(n);
        vector<ll> tel;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            tel.push_back(i+1+a[i]);
        }
        sort(tel.begin(),tel.end());
        ll res = 0;
        for(int i = 0; i < n; i++){
            if(c >= tel[i]){
                res++;
                c-=tel[i];
            }
            else{
                break;
            }
        }
        cout << res << "\n";
    }

    return 0;}