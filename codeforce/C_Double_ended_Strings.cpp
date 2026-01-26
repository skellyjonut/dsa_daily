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
        string a,b;
        cin >> a >>b ;
        int lcs = 0;
        int n = a.size(),m = b.size();
        for(int len = 1; len <= min(n,m); len++){
            for(int i = 0; i+len <= n;i++){
                for(int j = 0; j+len <= m; j++){
                    if(a.substr(i,len) == b.substr(j,len)){
                        lcs = max(lcs,len);
                    }
                }
            }
        }
        cout << n+m-2*lcs << "\n";
    }

    return 0;
}