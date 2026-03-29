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
        // ---- Your logic here ----
        bool pos = true;
        int i = 1;
        while(i < n && v[i] == i+1){
            i++;
        }
        if(i == n-1){
            cout << "yes";
        }
        else{
            for(int i )
        }
    }

    return 0;
}