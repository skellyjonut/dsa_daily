#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e6+5;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0 ; i < n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,1});
        v.push_back({b,-1});
    }
    sort(v.begin(),v.end());
    ll res = 0;
    ll ans = INT_MIN;
    for(auto i:v){
        res+=i.ss;
        ans = max(ans,res);
    }

    cout << ans;
    return 0;
}