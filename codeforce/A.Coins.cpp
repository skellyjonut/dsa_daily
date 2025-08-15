#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long n,k;
    for(int i = 0; i < t; i++){
        cin >> n >> k;
        if(n%2 == 0 || (n%2 == 1) && (k%2 == 1)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}