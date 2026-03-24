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
        vector<int> v(n);
        ll neg = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i] < 0)neg+=abs(v[i]);
        }
        ll ne=0,p=0,res=neg;
        for(int i = 0 ; i < n; i++){
            if(v[i] > 0)p+=v[i];
            else{
                ne+=abs(v[i]);
            }
            res = max(res,p + (neg-ne));
        }
        cout << res << "\n";

    }

    return 0;
}