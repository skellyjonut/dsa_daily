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
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int cnt=0;
        for(int i = 0; i<n;i++){
            if(s[i] != c)cnt++;
        }
        if(cnt == 0){
            cout << 0 << "\n";
            continue;
        }
        int val = -1;
        for(ll i = 2; i <= n; i++){
            bool ispos = true;
            for(ll j = i; j <= n; j+=i){
                if(s[j-1] != c){
                    ispos = false;
                    break;
                }
            }
            if(ispos){
                val = i;
                break;
            }
        }
        if(val != -1){
            cout << 1 << "\n";
            cout << val << "\n";
        }
        else{
            cout << 2 << "\n";
            cout << n-1 << " " << n << "\n"; 
        }
    }

    return 0;
}