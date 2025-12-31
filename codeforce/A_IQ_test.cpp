#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a;
    cin >> n;
    vector<int> o;
    vector<int> e;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(a%2 == 0)e.push_back(i);
        else{
            o.push_back(i);
        }
    }
    if(e.size() == 1)cout << e[0]+1;
    else{
        cout << o[0]+1;
    }
}