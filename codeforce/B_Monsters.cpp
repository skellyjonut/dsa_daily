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
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        set<pair<int,int>> st;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----
        vector<pair<int,int>> s;
        vector<int> res;
        for(int i = 0; i < n; i++){
            if(v[i]%k == 0)res.push_back(i);
            else{
                s.push_back({v[i]%k,-i});
            }
        }
        sort(s.rbegin(),s.rend());
        for(auto i: s){
            res.push_back(-i.second);
        }
        for(auto i: res){
            cout << i+1 << " ";
        }
        cout << "\n";

    }

    return 0;
}