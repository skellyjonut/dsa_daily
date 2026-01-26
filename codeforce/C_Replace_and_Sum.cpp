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
        ll n,q,l,r;
        cin >> n >> q;
        vector<int> a(n),b(n);
        for(int i = 0; i < n; i++)cin >> a[i];
        for(int i = 0; i < n; i++)cin >> b[i];
        int mx = max(a[n-1],b[n-1]);
        vector<int> prefix(n+1,0);
        for(int i = n-1; i >= 0; i--){
            mx = max(mx,max(a[i],b[i]));
            prefix[i+1] = mx;
        }
        for(int i =1;i <= n;i++){
            prefix[i] = prefix[i-1] + prefix[i];
        }
        for(int i = 0; i < q;i++){
            cin >> l >> r;
            if(l == 1){
                cout << prefix[r] << " ";
            }
            else{
                cout << prefix[r] - prefix[l-1] << " ";
            }
        }
        cout << "\n";

    }

    return 0;
}