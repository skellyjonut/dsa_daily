#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    long long res = 1;
    cout << "Enter A and n :";
    cin >> a >> n;
    while(n > 0){
        if(n&1){
            res = res*a;
        }
        a = a*a;
        n = n>>1;
    }
    cout << res;
    return 0;
}