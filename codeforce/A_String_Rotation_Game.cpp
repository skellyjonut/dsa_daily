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
        char prev = s[0];
        int res = 1;
        bool can_split = false;
        for(int i = 1; i < n; i++){
            if(s[i] == prev){
                can_split = true;
                continue;
            }
            else{
                res++;
                prev = s[i];
            }
        }
        if(res >= 2 && can_split){
            if(s[0] == s[n-1])res--;
            cout << res+1 << "\n";
        }
        else{
            cout << res << "\n";
        }
    }

    return 0;
}