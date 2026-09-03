#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        bool fnd = false;

        for(int i = 1; i < n-1; i++){
            if(s[i-1] == s[i+1] && s[i] != s[i+1]){
                fnd = true;
                break;
            }
        }
        ll ans = 1;
        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1])continue;
            ans++;
        }
        bool uniq = false;
        if(!fnd){
            for(int i = 1; i <n-1; i++){
                if(s[i] != s[i-1] && s[i] != s[i+1])uniq = true;
            }
            if(uniq){
                cout << ans-1 << "\n";
            }
            else{
                cout << ans << "\n";
            }
        }
        else{
            cout << ans-2 << "\n";
        }

    }

    return 0;
}