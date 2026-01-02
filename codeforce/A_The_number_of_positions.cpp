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
    int n,a,b;
    cin >> n >> a >>b ;
    if((n-a) > b){
        cout << b+1;
    }
    else{
        cout << n-a;
    }
    return 0;
}