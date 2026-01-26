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

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int max1 = 0;
        unordered_map<int,int> mp1;
        unordered_map<int,int> mp2;
        int prev = a[0];
        int m = 1;
        mp1[a[0]] = 1;
        for(int i = 1; i < n; i++){
            if(a[i] == prev){
                m++;
            }
            else{
                m=1;
                prev = a[i];
            }
            mp1[a[i]] = max(mp1[a[i]],m);
        }
        m=1;
        mp2[b[0]] = 1;
        prev = b[0];
        for(int i = 1; i < n; i++){
            if(b[i] == prev){
                m++;
            }
            else{
                m=1;
                prev = b[i];
            }
            mp2[b[i]] = max(mp2[b[i]],m);
        }
        int res = 0;
        for(auto i:mp1){
            res = max(res,i.ss + mp2[i.ff]);
        }
        for(auto i:mp2){
            res = max(res,i.ss + mp1[i.ff]);
        }
        cout << res << "\n";
    }

    return 0;
}