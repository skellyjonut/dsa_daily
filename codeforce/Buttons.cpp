#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    long long a,b,c;
    for(int i = 0 ; i < t; i++){
        cin >> a >> b >> c;
        if(c%2 == 0){
            if(b-a >= 0){
                cout << "Second" << endl;
            }
            else{
                cout << "First" << endl;
            }
        }
        else{
            if(a-b>=0){
                cout << "First" << endl;
            }
            else{
                cout << "Second" << endl;
            }
        }
    }
}