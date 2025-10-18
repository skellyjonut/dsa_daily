#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    long long a = 2;
    cin >> n;
    const long long MOD = 1e9+7;
    long long res = 1;
    while(n > 0){
        if(n & 1){
            res = res*a%MOD;
        }
        a=a*a%MOD;
        n = n >> 1;
    }
    cout << res;
}