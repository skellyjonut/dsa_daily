#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    long long x,y,a,b;
    long long res = 0;
    cin >> t;
    while(t--){
        cin >> x >> y >> a >> b;

        if(2*a <= b){
            res = a*x + a*y;
        }
        else{
            if(x*y <= 0){
               res = a*x + a*y; 
            }
            else{
                long long t = min(abs(x),abs(y));
                if(t == abs(x)){
                    res = x*b + (y-x)*a;
                }
                else{
                    res = y*b + (x-y)*a;
                }
            }
        }
        cout << res << "\n";
    }
}