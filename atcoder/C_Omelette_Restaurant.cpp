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
        ll n,d;
        cin >> n >> d;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> d(n);

        int b_sum = 0;
        for(int i = 0 ; i < d; i++){
            b_sum += a[i]-b[i];
            
        }
    }

    return 0;
}