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
        int n,k,res=INT_MAX,w=0,b=0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = 0; i < k;i++){
            if(s[i] == 'W')w++;
            else{
                b++;
            }
        }
        res = min(res,w);
        for(int i = k; i < n; i++){
            if(s[i] == 'W'){
                w++;
                if(s[i-k] == 'B')b--;
                else{
                    w--;
                }
            }
            else{
                b++;
                if(s[i-k] == 'B')b--;
                else{
                    w--;
                }
            }
            res = min(res,w);
        }
        cout << res << "\n";
    }

    return 0;
}