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

    int n,x,k;
    cin >> n >> x;
    vector<pair<ll,ll>> v(n+1);
    for(int i = 1 ; i <= n; i++){
        cin >> k;
        v[i] = {k,i};
    }

    sort(v.begin(),v.end());
    
    bool found = false;
    vector<int> res;
    for(int i = 1; i < n-1; i++){
        int l = i+1,r=n;
        int req = x - v[i].ff;
        while(l < r){
            if(v[l].ff + v[r].ff == req){
                res.push_back(v[i].ss);
                res.push_back(v[l].ss);
                res.push_back(v[r].ss);
                found = true;
                break;
            }
            else if(v[l].ff + v[r].ff > req){
                r--;
            }
            else{
                l++;
            }
        }
        if(found)break;
    }
    if(found){
        sort(res.begin(),res.end());
        cout << res[0] << " " << res[1] << " " << res[2];
    }
    else{
        cout << "IMPOSSIBLE";
    }

    return 0;
}