#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    int n,k,a;
    for(int i = 0; i < t; i++){
        bool pres = false;
        cin >> n >> k;
        for(int j = 0 ; j < n; j++){
            cin >> a;
            if(a == k){
                pres = true;
            }
        }
        if(pres){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}