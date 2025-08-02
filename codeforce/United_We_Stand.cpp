#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    int n;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<int> v(n);
        for(int i = 0 ; i < n; i++){
            cin >>v[i];
        }
        int mx = *max_element(v.begin(),v.end());
        vector<int> b,c;
        for(int i = 0; i < n; i++){
            if(v[i] != mx){
                b.push_back(v[i]);
            }
            else{
                c.push_back(v[i]);
            }
        }
        if(b.size() == 0){
            cout << -1 << endl;
        }
        else{
            cout << b.size() << " " << c.size() << endl;
            for(auto i:b){
                cout << i << " ";
            }
            cout << endl;
            for(auto i: c){
                cout << i << " ";
            }
            cout << endl;
        }
    }
}