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
        string s,t;
        cin >> s >> t;
        string r = "";
        unordered_map<char,int> mp;
        for(auto i:t){
            mp[i]++;
        }
        for(int i = s.size()-1;i>=0;i--){
            if(mp[s[i]] > 0){
                r =s[i] + r;
                mp[s[i]]--;
            }
        }
        if(r == t){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}