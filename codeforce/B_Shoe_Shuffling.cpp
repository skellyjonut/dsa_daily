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

        vector<int> v(n);
        map<int,int> mp;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }
        int k = 1;
        for(auto i:mp){
            if(i.ss == 1){
                k = 0;
                break;
            }
        }
        if(!k){
            cout << -1 << "\n";
        }
        else{
            int res = 0;
            vector<int> op;
            for(auto i:mp){
                if(i.ss != 0){
                    op.push_back(res+i.ss);
                    for(int j = 1; j < i.ss;j++){
                        op.push_back(res+j);
                    }
                    res = res+i.ss;
                }
            }
            for(auto i:op){
                cout << i << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}