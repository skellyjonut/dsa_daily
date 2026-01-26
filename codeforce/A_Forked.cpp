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
        int a,b;
        int x1,y1,x2,y2;
        cin >> a >> b >> x1 >> y1 >> x2 >> y2;
        vector<pair<int,int>> P = {{a,b},{-a,b},{a,-b},{-a,-b},{b,a},{-b,a},{b,-a},{-b,-a}};
        set<pair<int,int>> p1;
        set<pair<int,int>> p2;
        for(auto i: P){ 
            p1.insert({x1+i.ff,y1+i.ss});
        }
        for(auto i: P){
            p2.insert({x2+i.ff,y2+i.ss});
        }
        int res = 0;
        for(auto i:p1){
            if(find(p2.begin(),p2.end(),i) != p2.end()){
                res++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}