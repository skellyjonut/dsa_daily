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
        int bal[n];
        if(s[0] == '('){
            bal[0] = 1;
        }
        else{
            bal[0] = -1;
        }
        for(int i = 1 ; i < n; i++){
            if(s[i] == '('){
                bal[i] = bal[i-1]+1;
            }
            else{
                bal[i] = bal[i-1]-1;
            }
        }
        if(bal[n-1] != 0){
            cout << -1 << "\n";
            continue;
        }
        if(*min_element(bal,bal+n) == 0){
            cout << 1 << "\n";
            for(int i = 0 ; i < n; i++){
                cout << 1 << " ";
            }
            cout << "\n";
            continue;
        }
        if(*max_element(bal,bal+n) == 0){
            cout << 1 << "\n";
            for(int i = 0 ; i < n; i++){
                cout << 1 << " ";
            }
            cout << "\n";
            continue;
        }
        int ans[n];
        for(int i = 0 ; i < n; i++){
            if(bal[i] > 0)ans[i]=1;
            else if(bal[i] < 0)ans[i]=2;
            else{
                if(bal[i-1] > 0)ans[i] =1;
                else{
                    ans[i] = 2;
                }
            }
        }
        cout << 2 << "\n";
        for(auto i:ans){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}