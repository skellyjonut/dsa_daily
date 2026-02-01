#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n,k,a,b,x,y,res,ans;
        cin >> n >> k >> a >> b;
        vector<pair<ll,ll>> v(n);
        for(int i = 0 ; i < n; i++){
            cin >> x >> y;
            v[i].ff = x;
            v[i].ss = y; 
        }
        res = abs(v[a-1].ff - v[b-1].ff) +  abs(v[a-1].ss - v[b-1].ss);
        if(a <= k && b <= k){
            ans = 0;
        }
        else if(a <=k){
            ll min_a = abs(v[0].ff - v[b-1].ff) +  abs(v[0].ss - v[b-1].ss);
            for(int i = 1; i < k; i++){
                ll temp = abs(v[i].ff - v[b-1].ff) +  abs(v[i].ss - v[b-1].ss);
                if(temp < min_a){
                    min_a = temp;
                }
            }
            ans = min_a;
        }
        else if(b <= k){
            ll min_b = abs(v[0].ff - v[a-1].ff) +  abs(v[0].ss - v[a-1].ss);
            for(int i = 1; i < k; i++){
                ll temp = abs(v[i].ff - v[a-1].ff) +  abs(v[i].ss - v[a-1].ss);
                if(temp < min_b){
                    min_b = temp;
                }
            }
            ans = min_b;
        }
        else{
            ll min_a = abs(v[0].ff - v[b-1].ff) +  abs(v[0].ss - v[b-1].ss);
            for(int i = 1; i < k; i++){
                ll temp = abs(v[i].ff - v[b-1].ff) +  abs(v[i].ss - v[b-1].ss);
                if(temp < min_a){
                    min_a = temp;
                }
            }
            ll min_b = abs(v[0].ff - v[a-1].ff) +  abs(v[0].ss - v[a-1].ss);
            for(int i = 1; i < k; i++){
                ll temp = abs(v[i].ff - v[a-1].ff) +  abs(v[i].ss - v[a-1].ss);
                if(temp < min_b){
                    min_b = temp;
                }
            }
            ans = min_a + min_b;
        }
        res = min(res,ans);
        cout << res << "\n";
    }

    return 0;
}