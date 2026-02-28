#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
const int m = 1e6+1;
bool primo[m];

void isPrime(){
    fill(primo,primo+m,true);
    primo[0] = primo[1] = true;
    for(int i = 2; i*i <= m; i++){
        if(primo[i]){
            for(int j = i*i; j <= m; j+=i){
                primo[j] = false;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    isPrime();
    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----
        if(is_sorted(v.begin(),v.end())){
            cout << "Bob" << "\n";
        }
        else{
            unordered_map<ll,ll> mp;
            for(ll i = 2; i*i <= m;i++){
                if(mp.count(i))continue;
                ll val = i*i;
                while(val <= m){
                    mp[val] = i;
                    val*=i;
                }
            }
            for(int i = 0; i < n; i++){
                if(mp.count(v[i])){
                    v[i] = mp[v[i]];
                }
            }
            bool flag = true;
            for(int i = 0; i < n; i++){
                if(!primo[v[i]]){
                    flag = false;
                    break;
                }
            }
            if(flag && is_sorted(v.begin(),v.end())){
                cout << "Bob" << "\n";
            }
            else{
                cout << "Alice" << "\n";
            }
        }
    }

    return 0;
}