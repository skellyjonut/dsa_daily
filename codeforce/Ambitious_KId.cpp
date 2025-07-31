#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a;
    cin >> n;
    int m = INT_MAX;
    for(int i = 0 ; i < n; i++){
        cin >> a;
        m=min(m,abs(a));
    }
    cout << m;
}