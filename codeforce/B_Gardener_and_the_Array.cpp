#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin >> n;
        vector<vector<int>> nums;
        unordered_map<int,int> mp;
        for(int i = 0 ; i < n; i++){
            cin >> k;
            vector<int> v(k);
            for(int j = 0; j < k; j++){
                cin >> v[j];
                mp[v[j]]++;
            }
            nums.push_back(v);
        }
        bool res = false;
        for(auto arr:nums){
            int flag = 1;
            for(auto j:arr){
                if(mp[j] == 1){
                    flag = 0;
                    break;
                }
            }
            if(flag == 1){
                res = true;
                break;
            }
        }
        if(res){
            cout << "Yes" << "\n";
        }
        else{
            cout << "No" << "\n";
        }

    }

    return 0;
}