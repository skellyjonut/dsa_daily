#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,n;
    cin >> t;
    vector<string> v;

    for(int i = 0; i < t; i++){
        cin >> n;
        if(n%3 == 0){
            v.push_back("Second");
        }
        else{
            v.push_back("First");
        }
    }
    for(auto i:v){
        cout  << i << endl;
    }
}