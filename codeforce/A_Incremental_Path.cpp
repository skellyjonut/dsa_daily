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
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        set<int> wt;
        set<int> bk;
        for(int i = 1; i < 2*(n+m); i++){
            wt.insert(i);
        }
        int a;
        for(int i = 0; i < m; i++){
            cin >> a;
            wt.erase(a);
            bk.insert(a);
        }
        int cur = 1;
        for(int i = 0 ; i < n; i++){
            if(s[i] == 'A'){
                cur++;
                if(wt.count(cur)){
                    wt.erase(cur);
                    bk.insert(cur);
                }
            }
            else{
                cur = *wt.upper_bound(cur);
                int temp = cur;
                bk.insert(temp);
                wt.erase(temp);
                cur = *wt.upper_bound(temp);
            }
        }
        cout << bk.size() << "\n";
        for(auto i:bk){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}