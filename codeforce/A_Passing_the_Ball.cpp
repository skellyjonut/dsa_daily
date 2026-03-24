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
        unordered_map<int,int> mp;
        int l = 0;
        for(int i = 0; i < n; i++){
            mp[l]++;
            if(s[l] == 'R'){
                l++;
            }
            else{
                l--;
            }
        }
        int res = 0;
        for(auto i:mp){
            if(i.ss >= 1)res++;
        }
        cout << res << "\n";
    }

    return 0;
}