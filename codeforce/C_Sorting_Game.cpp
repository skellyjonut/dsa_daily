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
        string s;
        cin >> s;
        // ---- Your logic here ---
        string t = s;
        sort(t.begin(),t.end());
        vector<int> res;
        if(s == t){
            cout << "Bob" << "\n";
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] != t[i]){
                    res.push_back(i+1);
                }
            }
            cout << "Alice" << "\n";
            cout << res.size() << "\n";
            for(auto i:res){
                cout << i << " ";
            }
            cout << "\n";
        }

    }

    return 0;
}