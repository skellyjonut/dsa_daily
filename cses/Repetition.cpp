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
    
    string s;
    cin >> s;
    ll r = 1;
    ll res = 0;
    for(int i = 1 ; i < s.length(); i++){
        if(s[i] == s[i-1]){
            r++;
            res = max(res,r);
        }
        else{
            r=1;
        }
    }
    res = max(res,r);
    cout << res;
    return 0;
}