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
    vector<int> a(n);
    vector<int> b(n);
    vector<pair<int,int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].ff >> v[i].ss;
    }
    bool flag = false;
    sort(v.begin(),v.end());
    for(int i = 1; i < n; i++){
        if(v[i].ss < v[i-1].ss){
            flag = true;
            break;
        }
    }
    if(flag)cout << "Happy Alex";
    else{
        cout << "Poor Alex";
    }
    return 0;
}