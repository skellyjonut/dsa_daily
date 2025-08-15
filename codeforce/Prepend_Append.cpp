#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t ;
    string s;
    for(int i = 0; i < t; i++){
        cin >>n ;
        cin >> s;
        int c = 0;
        for(int j = 0; j < n/2;j++){
            if((s[j] == '0' && s[n-1-j] == '1') || (s[j] == '1' && s[n-1-j] == '0')){
                c++;
            }
            else{
                break;
            } 
        }
        cout << n - 2*c << endl;  
    }
}