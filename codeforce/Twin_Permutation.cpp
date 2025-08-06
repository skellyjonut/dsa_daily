#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    for(int i = 0; i < t;i++){
        cin >> n;
        vector<int> v(n);
        for(int j = 0 ; j < n; j++){
            cin >> v[j];
        }
        for(auto k:v){
            cout << n-k+1 << " ";
        }
        cout << endl;
    }
}