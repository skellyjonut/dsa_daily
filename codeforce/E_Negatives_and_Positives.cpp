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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll min_el = abs(v[0]);
        ll cnt = 0;
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum+=abs(v[i]);
            if(abs(v[i]) < min_el)min_el=abs(v[i]);
            if(v[i] < 0)cnt++;
        }
        if(cnt%2 == 0)cout << sum << "\n";
        else{
            cout << sum-(2*min_el) << "\n";
        }
    }

    return 0;
}