#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> v(n);
        for(int i =0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int a = v[n-1];
        v.insert(v.begin(),a);
        v.pop_back();
        if(v[0] == v[1]){
            cout << "NO" << endl;
            continue;
        }
        else{
            cout << "YES" << endl;
        for(auto i:v){
            cout << i << " ";
        }
        cout << endl;
        }
    }
}