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
        unordered_map<char,int> mp;
        set<char> st;
        unordered_map<char,int> first;

        int res = 0;
        for(auto i:s){
            mp[i]++;
        }
        for(auto i:s){
            int sum = 0;
            int mpsize = 0;
            st.insert(i);
            mp[i]--;
            for(auto i:mp){
                if(i.ss >= 1)mpsize++;
            }
            sum = st.size() + mpsize;
            res = max(res,sum);
        }
        cout << res << "\n";

    }

    return 0;
}