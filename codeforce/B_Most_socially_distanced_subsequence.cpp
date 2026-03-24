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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        vector<int> res;
        bool dec = false;
        bool inc = false;
        res.push_back(v[0]);
        for(int i = 1 ; i < n; i++){
            if(v[i] > v[i-1]){
                dec = false;
                if(inc)res.pop_back();
                else{
                    inc = true;
                }
            }       
            else{
                inc = false;
                if(dec)res.pop_back();
                else{
                    dec = true;
                }
            }
            res.push_back(v[i]);
        }
        cout << res.size() << "\n";
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}