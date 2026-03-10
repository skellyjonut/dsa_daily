#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
ll int M = 998244353;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // ---- Your logic here ----
        ll cur = 1;
        ll perm = 1;
        ll n = s.size();
        ll dupe = 0;
        for(int i = 1 ; i < n; i++){
            if(s[i] != s[i-1]){
                perm = (perm*cur)%M;
                dupe += (cur-1);
                cur = 1;
            }
            else{
                cur++;
            }
        }
        dupe += (cur-1);
        perm = perm*cur;
        for(int i = 1; i <= dupe; i++){
            perm = (perm*i)%M;
        }
        cout << dupe << " " << perm << "\n";

    }

    return 0;
}