#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    long long n,a,b;
    while(t--){
        cin >> n >> a >> b;
        if(n%2==1){
            if((b%2==1 && b>=a) || (a%2==1)&&(b%2==1)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else{
            if((b%2==0 && b>=a) || (a%2==0)&&(b%2==0)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
}