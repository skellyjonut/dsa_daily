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

    ll n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin>>v[i];
    ll tot = 0,sum=0;
    for(int i = 0; i < k; i++){
        sum+=v[i];
    }
    tot += sum;
    for(int i = k; i < n; i++){
        sum -= v[i-k];
        sum += v[i];
        tot += sum;
    }
    cout << fixed << setprecision(10) << (double)tot/(n-k+1);

    return 0;
}