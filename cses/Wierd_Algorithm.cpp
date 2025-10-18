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
    cout << t << " ";
    while(t!=1){
        if(t%2 == 0){
            t=t/2;
        }
        else{
            t=t*3 + 1;
        }
        cout << t << " ";
    }
    return 0;
}