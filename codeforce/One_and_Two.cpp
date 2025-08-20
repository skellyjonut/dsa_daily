#include <bits/stdc++.h>
using namespace std;


int main(){
    int t,n;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        cin >> n;
        vector<int> v(n);
        int c = 0;
        for(int j = 0; j < n; j++){
            cin >> v[j];
            if(v[j] == 2)c++;
        }
        int r = 0;
        if(c%2 == 1){
            cout << -1 << endl;
        }
        else{
            for(int j = 0; j < n; j++){
                if(v[j] == 2){
                    r++;
                }
                if(r == c/2){
                    cout << j+1 << endl;
                    break;
                }
            }
        }

    }
}