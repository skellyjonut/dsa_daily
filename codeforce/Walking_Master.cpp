#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long x,y,a,b,r;
    for(int i = 0 ; i < t; i++){
        r=0;
        cin >> x >> y >> a >> b;
        if(y > b){
            cout << -1 << endl;
            continue;
        }
        while(y!=b){
            x++;
            y++;
            r++;
        }
        if(x < a){
            cout << -1 << endl;
            continue;
        }
        while(x!=a){
            x--;
            r++;
        }
        cout << r << endl;
    }
}