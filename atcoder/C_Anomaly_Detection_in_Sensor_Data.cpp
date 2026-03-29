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

    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    ll sum = 0;
    for(int i = 0; i < k; i++){
        sum+=v[i];
    }
    int res = 0;
    if(sum <= 0)res++;
    for(int i = k; i < n;i++){
        sum = sum + (v[i]-v[i-k]);
        if(sum <= 0)res++;
    }
    cout << res << "\n";

    return 0;
}