#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,x,a;
    cin >> n >> x;
    vector<pair<ll,ll>> v(n+1);
    for(int i = 1 ; i <= n; i++){
        cin >> a;
        v[i] = {a,i};
    }
    sort(v.begin(),v.end());
    vector<int> res;
    bool fnd = false;
    for(int i = 1; i < n-2; i++){
        for(int j = n; j>=i+3; j--){
            int req = x - v[i].ff - v[j].ff;
            int l = i+1,r=j-1;
            while(l < r){
                if(v[l].ff+v[r].ff == req){
                    fnd = true;
                    res.insert(res.end(),{v[i].ss,v[l].ss,v[r].ss,v[j].ss});
                    break;
                }
                else if(v[l].ff+v[r].ff > req){
                    r--;
                }
                else{
                    l++;
                }
            }
            if(fnd)break;
        }
        if(fnd)break;
    }
    if(fnd){
        sort(res.begin(),res.end());
        for(auto i:res){
            cout << i << " ";
        }
    }
    else{
        cout << "IMPOSSIBLE";
    }

    return 0;
}