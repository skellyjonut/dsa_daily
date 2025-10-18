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

    ll n,a;
    cin >> n;
    ll tot = n*(n+1)/2;
    for(int i=0; i < n-1; i++){
        cin >> a;
        tot = tot - a;
    }
    cout << tot << endl;
    
    
    return 0;
}