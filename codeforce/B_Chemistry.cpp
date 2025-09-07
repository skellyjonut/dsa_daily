#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    long long n,k;
    string s;
    cin >> t;
    
    while (t--) {
        cin >> n >> k;
        cin >> s;
        vector<int> v(26,0);
        for(char c:s){
            v[c - 'a']++;
        }
        int odd = 0;
        for(auto i:v){
            if(i%2 == 1)odd++;
        }
        if(odd > k+1){
            cout << "NO" << "\n";
        }
        else{
            cout << "YES" << "\n";
        }

    }
    return 0;
}