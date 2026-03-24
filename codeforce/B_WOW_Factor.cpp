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

    string s;
    cin >> s;
    int n = s.size();
    ll v = 0;
    for(int i = 1; i < n;i++){
        if(s[i] == 'v' && s[i-1] == 'v')v++;
    }
    ll cnt = 0,res=0;
    for(int i = 0 ; i < n; i++){
        if(i > 0 && s[i] == 'v' && s[i-1] == 'v'){
            cnt++;
        }
        else if(s[i] == 'o'){
            int r = v - cnt;
            res +=  (cnt*r);
        }
    }
    cout << res;

    return 0;
}