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

//the max possible answer is always 30, because by dividing a with the minimum possible value for b which is 
//can only be there for 30 times cus log2(10^9) is approx 30,

//so i iterate through b and also check if incrementing b first can improve its result
//taking the minimum of the possible vlaues

    int t;
    cin >> t;
    while (t--) {
        ll a,b,temp;
        cin >> a >> b;
        ll res = INT_MAX;
        temp = a;
        for(ll i = max(b,1LL*2) ; i <= b+30; i++){
            a = temp;
            ll cnt = 0;
            while(a!=0){
                a=(a/i);
                cnt++;
            }
            res = min(res,cnt+(i-b));
        }
        cout << res << "\n";
    }

    return 0;
}