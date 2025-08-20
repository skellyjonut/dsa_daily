#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,b;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        if(n == 1){
            cout << "yes" << endl;
        }
        else if(n-a-b >= 2 || (n==a) && (n==b)){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
        
    }
}