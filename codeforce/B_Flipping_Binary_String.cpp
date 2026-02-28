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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zro=0,one=0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0')zro++;
            else{
                one++;
            }
        }
        vector<int> res;
        if(one%2 == 0){
            for(int i = 0; i < n; i++){
                if(s[i] == '1')res.push_back(i+1);
            }   
            cout << res.size() << "\n";
            for(auto i: res){
                cout << i  << " ";
            }
            if(res.size() != 0)cout << "\n";
        }
        else if(zro%2 == 1 && one%2 == 1){
            for(int i = 0; i < n; i++){
                if(s[i] == '0')res.push_back(i+1);
            }   
            cout << res.size() << "\n";
            for(auto i: res){
                cout << i  << " ";
            }
            if(res.size() != 0)cout << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }

    return 0;
}