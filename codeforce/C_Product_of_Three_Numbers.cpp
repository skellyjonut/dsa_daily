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
        ll n;
        cin >> n;
        vector<int> res;
        bool f = false;
        for(int i = 2;i*i <= n; i++){
            if(n%i == 0){
                res.push_back(i);
                n = n/i;
            }
            if(res.size() == 2){
                f = true;
                break;
            }
        }
        if(n == 1 || res.size() < 2 || n == res[0] || n == res[1]){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
            cout << res[0] << " " << res[1] << " " << n <<"\n";
        }
    }

    return 0;
}