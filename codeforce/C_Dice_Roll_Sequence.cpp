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
        int res=0;
        for(int i = 1; i < n; i++){
            if(v[i] == abs(7-v[i-1]) || v[i] == v[i-1]){
                res++;
                i++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}