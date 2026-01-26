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
        ll n,p,res=0;
        cin >> n >> p;
        res = p;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++){
            v[i].ff = b[i];
            v[i].ss = a[i];
        }
        sort(v.begin(),v.end());
        int cnt = 1,it = 0;
        while(cnt < n && it < n){
            if(v[it].ff < p){
                for(int i = 0 ; i < v[it].ss; i++){
                    if(cnt == n)break;
                    res+=v[it].ff;
                    cnt++;
                }
                it++;
            }
            else{
                res+= (p*(n-cnt));
                break;
            }
        }
        if(n == 1){
            cout << p << "\n";
        }
        else{
            cout << res << "\n"; 
        }
        
    }

    return 0;
}