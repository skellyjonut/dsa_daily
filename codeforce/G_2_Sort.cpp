#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)cin >> v[i];
        // ---- Your logic here ----
        
        int l = 0,r=0,cnt=0,res=0;
        while(r < k){
            if(v[r] < 2*v[r+1])cnt++;
            r++;
        }
        while(r < n-1){
            if(cnt == k)res++;
            if(v[l] < 2*v[l+1])cnt--;
            if(v[r] < 2*v[r+1])cnt++;

            l++;
            r++;
        }

        if(cnt == k)res++;
        cout << res << "\n";

    }

    return 0;
}