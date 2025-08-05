#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,x,k;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> x >> k;
        if(x%k != 0){
            cout << 1 << endl << x << endl;
        }
        else{
            cout << 2 << endl;
            cout << x+1 <<" " << -1 << endl ; 
        }
    }
}