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
    while(t--) {
        ll n;
        cin >> n;
        ll a = 0,b = 0;
        bool flag;
        while(n){
            flag = true;
            if(n == 1)break;
            if(n%2 == 0){
                a++;
                n=n/2;
            }
            else if(n%3 == 0){
                b++;
                n=n/3;
            }
            else{
                flag = false;
                break;
            }
        }
        if(a > b){
            flag = false;
        }
        if(flag){
            cout << (b-a) + b << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }
    return 0;
}