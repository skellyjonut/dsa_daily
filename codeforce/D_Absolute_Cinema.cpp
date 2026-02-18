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
        vector<ll> res(n);
        for(int i = 0; i < n; i++){
            int n1 = n-1-i;
            int n2 = i;
            ll sum1 = n1*(n1+1)/2;
            ll sum2 = n2*(n2+1)/2;
            ll fn = sum1+sum2;
            res[i] = fn/v[i]; 
        }
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}