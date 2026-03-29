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

    int n,m;
    cin >> n >> m;
    set<int> s;
    for(int i = 1; i <= m; i++){
        s.insert(i);
    }
    vector<int> res(n,0);
    for(int i = 0; i < n; i++){
        int l,a;
        bool found = false;
        cin >> l;
        for(int j =0; j < l; j++){
            cin >> a;
            if(!found && s.count(a)){
                s.erase(a);
                res[i] = a;
                found = true;
            }
        }
        
    }
    for(auto i:res){
        cout << i << "\n";
    }

    return 0;
}