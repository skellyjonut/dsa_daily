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
        ll res = 0;
        vector<bool> removed(n+1,false);
        for(int i = 1 ; i <= n; i++){
            for(int j = i ; j <= n; j+=i){
                if(s[j-1] == '1')break;
                if(removed[j])continue;
                else{
                    removed[j] = true;
                    res+=i;
                }
            }
        }   
        cout << res << "\n";
    }

    return 0;
}