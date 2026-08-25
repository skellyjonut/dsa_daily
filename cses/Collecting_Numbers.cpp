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

    int n;
    cin >> n;
    vector<pair<int,int>> v(n);

    for(int i = 0 ; i < n; i++){
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(),v.end());

    int res = 1;
    for(int i = 1 ; i < n; i++){
        if(v[i].second < v[i-1].second)res++;
    }
    cout << res << "\n";

    return 0;
}