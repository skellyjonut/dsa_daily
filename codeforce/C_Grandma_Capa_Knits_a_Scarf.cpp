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
        int res=n+1;
        for(int i = 0; i < 26; i++){
            int l = 0,r = n-1;
            int cnt = 0;
            while(l<=r){
                if(s[l] == s[r]){
                    l++;
                    r--;
                }
                else if(s[l] == char('a'+i)){
                    l++;
                    cnt++;
                }
                else if(s[r] == char('a'+i)){
                    r--;
                    cnt++;
                }
                else{
                    cnt = n+1;
                    break;
                }
            }
            res = min(res,cnt);
        }
        if(res == n+1){
            cout << -1 << "\n";
        }
        else{
            cout  << res << "\n";
        }
    }

    return 0;
}