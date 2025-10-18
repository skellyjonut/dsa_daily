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
    vi v;
    unordered_map<int,int> mp;
    while(t--) {
        ll a,b;
        cin >> a >> b;
        mp[a]++;
        v.push_back(b);
    }
    int cnt = 0;
    for(auto i:v){
        if(cnt+=mp[i]);
    }
    cout << cnt;
    return 0;
}