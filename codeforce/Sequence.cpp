#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i < t; i++){
        int b;
        cin >> b;
        vector<int> v(b);
        vector<int> ans;
        for(int j = 0; j < b ;j++){
            cin >> v[j];
        }
        ans.push_back(v[0]);
        for(int i = 1 ; i < b; i++){
            if(v[i] >= v[i-1]){
                ans.push_back(v[i]);
            }
            else{
                ans.push_back(v[i]);
                ans.push_back(v[i]);
            }
        }
        cout << ans.size() << endl;
        for(auto i:ans){
            cout << i << " ";
        }
        cout << endl;
    }
}