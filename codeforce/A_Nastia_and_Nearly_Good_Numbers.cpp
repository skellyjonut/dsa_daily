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
            long long a,b;
            cin >> a >> b;
            if(b == 1){
                cout << "NO" << "\n";
            }
            else{
                cout << "YES" << "\n";
                cout << a*(1) << " " << a*b << " " << a*(b+1) << "\n";
            }
        }
        return 0;
    }