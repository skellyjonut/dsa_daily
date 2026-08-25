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
    vector<int> v(n);
    for(int i = 0 ; i < n; i++)cin >> v[i];

    sort(v.begin(),v.end());

    ll x = 1;
    for(auto i:v){
        if(i > x){
            break;
        }
        x += i;
    }
    cout << x << "\n";

    return 0;
}