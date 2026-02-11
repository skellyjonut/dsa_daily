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

    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        ll max_len = 0;
        ll n = s.size();
        ll res = 0;
        for(ll i = 0; i < n; i++){
            if(s[i] == '1'){
                max_len++;
                res = max(res,max_len);
            }
            else{
                max_len = 0;
            }
        }
        if(res == n){
            cout << n*n << "\n";
        }
        else{
            max_len = 0;
            if(s[0] == '1' && s[n-1] == '1'){
                ll l = 0,r = n-1;
                while(s[l] == '1'){
                    max_len++;
                    l++;
                }
                while(s[r] == '1'){
                    max_len++;
                    r--;
                }
            }
            res = max(res,max_len);
            cout << ((res+2)/2)*((res+1)/2) << "\n"; 
        }
    }

    return 0;
}