#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<long long> v(n);
        for(int i = 0; i < n;i++){
            cin >> v[i];
        }
        long long min = v[0];
        vector<long long> res;
        for(int i = 1; i < n;i++){
            if (v[i] >= min){
                res.push_back(i+1);
            }
            else{
                min = v[i];
            }
        }
        cout << res.size() << "\n";
        for(int i = 0 ; i < res.size();i++)cout << res[i] << " ";
        cout << "\n";
    }
    return 0;
}