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
        int n,k;
        cin >> n >> k;
        long long N = n*k;
        vector<int> v(N);
        for(int i = 0; i < N;i++)cin >> v[i];
        long long res = 0;
        int g = n/2 + 1;
        while(k--){
            N-=g;
            res+=v[N];
        }
        cout << res << "\n";
    }  

    return 0;
}