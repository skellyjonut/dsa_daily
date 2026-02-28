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
        int n,m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----

        map<int,int> mp;
        vector<int> b(m);
        for(int i = 0; i < n; i++){
            b[v[i]%m]++;
        }
        int res = 0;
        if(b[0] !=0)res++;
        for(int i = 1; i < m; i++){
            if(b[i] == 0)continue;
            if(b[m-i] != 0){
                int x = abs(b[i] - b[m-i]);
                if(x <= 1){
                    res++;
                    b[m-i] = 0;
                }
                else{
                    res+=x;
                    b[m-i]=0;
                }   
            }
            else{
                res+=b[i];
            }
        }
        cout << res << "\n";
    }

    return 0;
}