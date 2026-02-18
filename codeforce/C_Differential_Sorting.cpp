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
        if(is_sorted(v.begin(),v.end())){
            cout << 0 << "\n";
        }
        else if(v[n-1] >= v[n-2] && v[n-1] >= 0){
            cout << n-2 << "\n";
            for(int i = 0; i < n-2; i++){
                cout << i+1 << " " << n-1 << " " << n << "\n";
            }
        }
        else{
            cout << -1 << "\n";
        }
    }

    return 0;
}