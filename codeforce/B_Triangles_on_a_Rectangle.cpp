#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()


double areaTriangle(double x1, double y1,double x2, double y2,double x3, double y3){
    return fabs(
        x1*(y2 - y3) +
        x2*(y3 - y1) +
        x3*(y1 - y2)
    ) / 2.0;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll w,h,k1,k2,l1,l2;
        cin >> w >> h;
        cin >> k1;
        vector<ll> x1(k1);
        ll res,res1,res2;
        for(ll i = 0; i < k1; i++){
            cin >> x1[i];
        }
        cin >> k2;
        vector<ll> x2(k2);
        for(ll i = 0; i < k2; i++){
            cin >> x2[i];
        }
        cin >> l1;
        vector<ll> y1(l1);
        for(ll i = 0; i < l1; i++){
            cin >> y1[i];
        }
        cin >> l2;
        vector<ll> y2(l2);
        for(ll i = 0; i < l2; i++){
            cin >> y2[i];
        }
        ll b1 = (x1[k1-1] - x1[0])*h;
        ll b2 = (x2[k2-1] - x2[0])*h;
        ll d1 = (y1[l1-1] - y1[0])*w;
        ll d2 = (y2[l2-1] - y2[0])*w;
        res1 = max(b1,b2);
        res2 = max(d1,d2);
        res = max(res1,res2);
        cout << res << "\n";
    }

    return 0;
}
