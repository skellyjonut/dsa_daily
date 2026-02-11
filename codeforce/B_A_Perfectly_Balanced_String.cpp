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
        string s;
        cin >> s; 
        set<char> prdc;
        bool cond = true;
        int n = s.size();
        int i = 0;
        for(i = 0; i < n;i++){
            if(prdc.count(s[i]))break;
            prdc.insert(s[i]);
        }
        for(int j = i; j < n; j++){
            if(s[j] != s[j-i]){
                cout << "NO" << "\n";
                cond = false;
                break;
            }
        }
        if(cond)cout << "YES" << "\n";
    }

    return 0;
}