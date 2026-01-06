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
        char c;
        string s;
        cin >> n >> c;
        cin >> s;
        vector<int> green;
        for(int i = 0; i < s.size(); i++){
            if(s[i] =='g'){
                green.push_back(i);
            }
        }
        int res = 0;
        int val = INT_MAX;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c){
                if(green[0] < i){
                    val = n-i+green[0];
                }
                auto it = lower_bound(green.begin(), green.end(), i);
                if(it != green.end()){
                    val = min(val,*it - i);
                }
                res = max(res,val);
            }
        }
        cout << res << "\n";
    }

    return 0;
}