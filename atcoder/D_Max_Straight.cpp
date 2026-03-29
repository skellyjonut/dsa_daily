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

    int n;
    cin >> n;
    unordered_map<int,int> mp;
    vector<int> v(n);
    for(int i = 0 ; i < n;i++)cin>>v[i];

    for(int i = 0; i < n; i++){
        if(mp.count(v[i]-1)){
            mp[v[i]] = mp[v[i]-1]+1;
        }
        else{
            mp[v[i]] = 1;
        }
    }
    int mx = 1;
    for(auto i: mp){
        mx = max(mx,i.ss);
    }
    cout << mx;
    return 0;
}