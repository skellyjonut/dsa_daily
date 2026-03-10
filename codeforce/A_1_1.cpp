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
        for(int i = 0 ; i < n-2; i++){
            if(s[i] == '1' && s[i+2] == '1'){
                s[i+1] = '1';
            }
        }
        int mx = 0, mn = 0;
        for(int i = 0 ; i < n; i++){
            if(s[i]=='1')mx++;
        }
        
        for(int i = 0; i < n-2; i++){
            if(s[i] == '1' && s[i+2] == '1'){
                mn++;
                i+=1;
            }
        }
        mn = mx - mn;
        cout << mn << " " << mx << "\n";
    }

    return 0;
}