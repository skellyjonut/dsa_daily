#include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n;
    cin >> t;
    vector<string> res;

    for(int i = 0 ; i < t; i++){
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        if(v[0] == 1){
            res.push_back("YES");
        }
        else{
            res.push_back("NO");
        }
    }
    for(auto i: res){
        cout << i << endl;
    }
}