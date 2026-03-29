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
        // we keep 2 arrays, and x,y as the last element of them, assuming x to be the smaller one, if a[i] < x;
        // add to the smaller x,y e if greater than x and y then also add to the smaller, if in between add to 
        // the greater one

        int x=INT_MAX,y=INT_MAX;
        ll res = 0;
        for(int i = 0 ; i < n; i++){
            if(x>y)swap(x,y);
            if(v[i] <= x){
                x = v[i];
            }
            else if(v[i] <= y){
                y = v[i];
            }
            else{
                x = v[i];
                res++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}