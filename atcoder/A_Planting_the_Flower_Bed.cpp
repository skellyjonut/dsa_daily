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

    double n,k,w;
    cin >> n >> w >> k;
    double space = w/(n-1);
    if(space >= k){
        cout << "Yes" <<"\n";
    }
    else{
        cout << "No" << "\n";
    }
    return 0;
}