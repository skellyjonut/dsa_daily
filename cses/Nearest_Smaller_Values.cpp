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
        int n;
        cin >> n;
        vector<int> v(n+1);
        v[0] = -1;
        for (int i = 1; i <= n; i++)cin >> v[i];
        // ---- Your logic here ----
        vector<int> res(n+1);
        for(int i = 1; i <= n; i++){
            if(v[i] > v[i-1])res[i] = i-1;
            else{
                int k = i-1;
                while(v[i] <= v[k]){
                    k = res[k];
                }
                res[i] = k;
            }
        }
        for(int i = 1; i <= n; i++){
            cout << res[i] << " ";
        }
    return 0;
}