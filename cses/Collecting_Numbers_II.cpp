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

    int n,m;
    cin >> n >> m;
    vector<int> v(n+1),p(n+1);
    for(int i = 1 ; i <= n; i++){
        cin >> v[i];
        p[v[i]] = i;
    }
    int res = 1;
    for(int i = 1; i < n; i++){
        if(p[i] > p[i+1])res++;
    }

    while(m--){
        int a,b;
        cin >> a >> b;

        int x = v[a];
        int y = v[b];

        set<int> st = {x-1,x,y-1,y};
        for(auto k:st){
            if(k >= 1 && k < n && p[k] > p[k+1])res--;
        }
        swap(v[a],v[b]);
        p[x] = b;
        p[y] = a;

        for(auto k:st){
            if(k >= 1 && k < n && p[k] > p[k+1])res++;
        }
        cout << res << "\n";
    }

    return 0;
}