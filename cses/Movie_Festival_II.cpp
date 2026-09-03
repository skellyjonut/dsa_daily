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

    int n,k,a,b,tot=0;
    cin >> n >> k;
    vector<pair<int,int>> v(n);
    for(int i = 0 ; i < n; i++){
        cin >> a >> b;
        v[i] = {b,a};
    }
    sort(v.begin(),v.end());
    
    multiset<int> ms;
    ms.insert(v[0].first);
    tot++;
    for(int i = 1 ; i < n; i++){
        auto [et,st] = v[i];
        auto it = ms.upper_bound(st);
        if(it == ms.begin()){
            if(ms.size() < k){
                ms.insert(et);
                tot++;
            }
        }
        else{
            it--;
            ms.erase(it);
            ms.insert(et);
            tot++;
        }
    }
    cout << tot;

    return 0;
}