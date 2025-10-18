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

    ll t,x;
    cin >> t >> x;
    vi v(t);
    for(int i=0; i < t; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int r = t-1;
    int l = 0;
    int res = 0;
    while(l <= r){
        if(l==r){
            res++;
            break;
        }
        if(v[r]+v[l] <= x){
            r--;
            l++;
            res++;
        }
        else{
            res++;
            r--;
        }
    }
    cout << res;
    return 0;
}