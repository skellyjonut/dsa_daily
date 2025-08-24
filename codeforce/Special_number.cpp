#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int c = 10;
        vector<long long> res;
        for(int i = 1; i < 17; i++){
            if(n%(c+1) == 0){
                res.push_back(n/(c+1));
            }
            c=c*10;
        }
        cout << res.size() << "\n";
        if(res.size() == 0)continue;
        sort(res.begin(),res.end());
        for(int i = 0; i < res.size();i++){
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}