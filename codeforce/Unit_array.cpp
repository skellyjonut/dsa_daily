#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0 ; i < t ; i++){
        cin >> n;
        vector<int> v(n);
        
        for(int j = 0; j < n ; j++){
            cin >> v[j];
        }
        int m = 0,p = 0,r=0;
        for(auto k:v){
            if(k == -1){
                m++;
            }
            else{
                p++;
            }
        }
        while(m%2 == 1 || p < m){
            m--;
            p++;
            r++;
        }
        cout << r << endl;
        
    }
}