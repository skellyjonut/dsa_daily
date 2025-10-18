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
    unordered_map<int,int> mp;
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vi p={k,l,m,n};
    for(auto r: p){
        for(int i = r; i <=d;i=i+r){
            mp[i]++;
        }
    }
    int cnt = mp.size();
    cout << cnt;
    
    return 0;
}