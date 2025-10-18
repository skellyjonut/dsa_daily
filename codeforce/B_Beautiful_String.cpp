#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while(t--) {
        ll n;
        string s;
        cin >> n;
        cin >> s;
        vector<int> res;
        for(int i = 0 ; i < s.size();i++){
            if(s[i] == '0'){
                res.pb(i+1);
            }
        }
        cout << res.size() << "\n";
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
        
    }
    return 0;
}