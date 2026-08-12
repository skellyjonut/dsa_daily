#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){

        int m,k,a,b;

        cin >> m >> k >> b >> a;

        int needk = m/k;
        int need1 = m%k;

        int fancy1 = max(0,need1 - b);
        int reg1 = max(0,b - need1);

        int fancyk = max(0,needk-a);
        int repl = min(reg1/k,fancyk);
        
        int res = fancy1 + fancyk-repl;
        cout << res << "\n";
    }
}