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

    int n,a,b;
    cin >> n;
    vector<tuple<int,int,int>> v;
    for(int i = 0 ; i < n; i++){
        cin >> a >> b;
        tuple<int,int,int> t = {a,b,i};
        v.push_back(t);
    }

    sort(v.begin(),v.end());
    multiset<pair<int,int>> ms;
    vector<int> res(n);
    auto [s,e,idx] = v[0];

    ms.emplace(e,1);
    int cnt = 1;
    res[idx] =cnt;
    for(int i = 1 ; i < n; i++){
        auto [s,e,idx] = v[i];
        auto [ee,ind] = *ms.begin();
        if(s > ee){
            res[idx] = ind;
            ms.erase(ms.begin());
            ms.emplace(e,ind);
        }
        else{
            cnt++;
            ms.emplace(e,cnt);
            res[idx] = cnt;
        }
    }
    cout << cnt << "\n";
    for(auto i:res)cout << i << " ";

    return 0;
}

