#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()


bool solve(vector<pair<int,int>> opr,int k){
    int l = -k,r=k;
    for(int i = 0 ; i < opr.size();i++){
        if(max(opr[i].ff,l) <= min(opr[i].ss,r)){
            int nl = max(opr[i].ff,l);
            int nr = min(opr[i].ss,r);
            l = nl-k;
            r = nr+k;
        }
        else{
            return false;
        }
    }
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n;
        vector<pair<int,int>> opr(n);
        for(int i = 0 ; i < n; i++){
            cin >> opr[i].ff >> opr[i].ss;
        }
        int l = 0,r=1e9+1,res = 0;
        while(l <= r){
            int mid = (l+r)/2;
            if(solve(opr,mid)){
                r = mid-1;
                res = mid;
            }
            else{
                l = mid+1;
            }
        }
        cout << res << "\n";
    }

    return 0;
}