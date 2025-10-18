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
    if(t == 3 || t == 2){
        cout << "NO SOLUTION";
    }
    else{
        for(int i = 2; i <= t ; i+=2){
            cout << i << " ";  
        }
        for(int i = 1 ; i <= t; i+=2){
            cout << i << " ";
        }
    }
    return 0;
}