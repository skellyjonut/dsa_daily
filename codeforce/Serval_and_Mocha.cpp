#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,a,n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<long long> v(n);
        for(int j = 0; j < n; j++){
            cin >> v[j];
        }
        bool isfound = false;
        for(int j = 0; j < n; j++){
            for(int k = 1; k < n; k++){
                if(gcd(v[j],v[k]) <=2){
                    isfound = true;
                    break;
                }
            }
        }
        if(isfound){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
}