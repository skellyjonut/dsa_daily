#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,a;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        int res = 0;
        cin >> n;
        for(int j = 0 ; j < n-1; j++){
            cin >> a;
            res = res + a;
        }
        cout << -1*res << endl;
    }
}