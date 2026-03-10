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
    int k = n/2;
    if(n%2 == 0){
        cout << (k+1)*(k+1);
    }
    else{
        cout << 2*(k+1)*(k+2);
    }

    return 0;
}