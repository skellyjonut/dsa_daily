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
        cin >> n;
        vll v(n);
        for(ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> res;
        for(int i = 1; i < n-1; i++){
            for(int j = 0; j < i; j++){
                if(v[j] < v[i]){
                    res.push_back(j+1);
                    res.push_back(i+1);
                    break;
                }
            }
            for(int j = i+1; j < n;j++){
                if(v[j] < v[i]){
                    res.push_back(j+1);
                    break;
                }
            }
            if(res.size() == 3){
                break;
            }
            else{
                res.clear();
            }
        }
        if(res.size() == 3){
            cout << "YES" << "\n";
            cout << res[0] << res[1] << res[2] << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}