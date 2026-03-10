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
 
        vector<int> v(n+1,0);
        for (int i = 2; i <= n; i++) {
            cin >> v[i];
        }
        string s;
        cin >> s;
        // ---- Your logic here ----
        vector<int> res(n+1,0);
        for(int i = n; i>0 ;i--){
            s[i-1] == 'W'?res[i]--:res[i]++;
            int r = v[i];
            res[r] += res[i];
        }
        int cnt = 0;
        for(int i = 1 ; i <= n; i++){
            if(res[i] == 0)cnt++;
        }
        cout << cnt << "\n";
    }
 
    return 0;
}