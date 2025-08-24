#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a;
    cin >> t;
    while(t--){
        cin >> a;
        int res;
        int c = 0;
        while(a>9){
            a=a/10;
            c++;
        }
        res = (c*9) + a;
        cout << res << endl;
    }
}