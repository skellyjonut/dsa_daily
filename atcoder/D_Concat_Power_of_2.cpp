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

    int n;
    cin >> n;
    vector<ll> nums;
    ll x = 1;
    nums.push_back(1);
    for(int i = 0 ; i < 31; i++){
        x = x*2;
        nums.push_back(x);
    }

    return 0;
}