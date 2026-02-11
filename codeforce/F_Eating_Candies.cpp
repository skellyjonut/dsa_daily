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
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int l=0,r=n-1;
        ll res = 0;
        ll lsum=v[l],rsum = v[r];
        while(l != r){
            if(lsum == rsum){
                res = (l+1)+(n-r);
                l++;
                lsum+=(v[l]);
            }
            else if(lsum > rsum){
                r--;
                rsum += v[r];
            }
            else{
                l++;
                lsum+= v[l];
            }
        }
        cout << res << "\n";
    }

    return 0;
}