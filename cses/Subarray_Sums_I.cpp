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

    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    ll l = 0,sum=0,cnt=0;
    for(int r = 0; r < n; r++){
        sum += v[r];
        while(sum > x){
            sum -= v[l];
            l++;
        }
        if(sum == x)cnt++;
    }
    cout << cnt << "\n";

    return 0;
}