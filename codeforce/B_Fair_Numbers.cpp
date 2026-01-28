#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

bool isFailr(ll n){
    ll temp = n;
    while(n != 0){
        int x = n%10;
        if(x != 0 && temp%x != 0)return false;
        n/=10;
    }
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n,temp;
        cin >> n;
        while(!isFailr(n)){
            n++;
        }
        cout << n << "\n";
    }

    return 0;
}