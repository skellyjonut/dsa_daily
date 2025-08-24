#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    string a,b,c;
    cin >> t;
    while(t--){
        cin >> n >> a >> m >> b >> c;
        for(int i = 0;i < b.length();i++){
            if(c[i] == 'D'){
                a=a+b[i];
            }
            else{
                a=b[i]+a;
            }
        }
        cout << a << endl;
    }
}