#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int t,k;
    vector<string> res;

    for(int i = 0; i < n;i++){
        cin >> t >> k;
        vector <int> v(t);
        for(int j = 0; j < t;j++){
            cin >> v[j];
        }
        if(is_sorted(v.begin(),v.end())){
            res.push_back("YES");
        }
        else{
            if(k == 1){
                res.push_back("NO");
            }
            else{
                res.push_back("YES");
            }
        }

    }
    for(auto i:res){
        cout << i << endl;
    }
}