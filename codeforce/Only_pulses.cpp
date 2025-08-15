#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,a,b,c,m;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        cin >> a >> b >> c;
        for(int j = 0; j < 5; j++){
            if(a <= b && a<=c){
                a++;
            }
            else if(b <= a && b<=c){
                b++;
            }
            else{
                c++;
            }
        }
        cout << a*b*c << endl;
    }
}