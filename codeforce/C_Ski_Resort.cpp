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
    long long n,k,q;

    cin >> t;
    while (t--) {
        long long res = 0;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        int c = 0;
        for(int i = 0; i < n; i++){
            if(v[i] <= q){
                c++;
            }
            else{
                if(c >= k){
                    res+=((c-k+1)*(c-k+2))/2;
                }
                c = 0;
            }
        }
        if(c >= k){
            res+=((c-k+1)*(c-k+2))/2;
        }
        cout << res << "\n";
    }

    return 0;
}