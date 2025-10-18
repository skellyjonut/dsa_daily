#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    int res = 0;
    int arr[5] = {100,20,10,5,1};
    for(auto i: arr){
        res+=t/i;
        t=t%i;
    }
    cout << res;
    return 0;
}