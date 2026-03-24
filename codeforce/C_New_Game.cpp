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
            ll n,k;
            cin >> n >> k;
            vector<ll> v(n);
            for (int i = 0; i < n; i++) {
                cin >> v[i];
            }
            sort(v.begin(),v.end());
            int j = 0;
            ll ans = 0;
            for(int i = 0 ; i  < n; i++){
                j = max(i,j);
                
                while(j+1 < n && v[j+1]-v[j] <= 1 && v[j+1]-v[i] < k){
                    j++;
                }
                ll val = j-i+1;
                ans = max(ans,val);
            }
            cout << ans << "\n";
        }

        return 0;
    }