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
            int n;
            cin >> n;
            vector<long double> c(n),p(n);
            for(int i = 0 ; i < n; i++){
                cin >> c[i] >> p[i];
                p[i] = p[i]/100;
            }
            long double ans = 0;
            for(int i = n-1; i >= 0; i--){
                ans = max(ans,ans*(1-p[i])+c[i]);
            }
            cout<<fixed<<setprecision(10)<<ans<<"\n";
        }

        return 0;
    }