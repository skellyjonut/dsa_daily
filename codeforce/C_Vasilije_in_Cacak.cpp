#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    long long n,k,x,r;
    long long minSum,maxSum;
    while (t--) {
        cin >> n >> k >> x;
        r = n-k;
        minSum = k*(k+1)/2;
        maxSum = (n*(n+1)/2) - (r*(r+1)/2);
        if((x >= minSum) && (x <= maxSum)){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }   
    return 0;
}