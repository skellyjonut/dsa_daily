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

    int a,b,n;
    cin >> n;
    vector<pair<pair<int,int>,int>> v;
    for(int i = 0 ; i < n; i++){
        cin >> a >> b;
        pair<pair<int,int>,int> p = {{a,-b},i};
        v.push_back(p);
    }

    sort(v.begin(),v.end());

    int rmax = INT_MIN;

    vector<int> A(n,0),B(n,0);

    for(auto i:v){
        pair<int,int> p = i.first;
        int idx = i.ss;
        int r = -p.ss;
        if(r <= rmax){
            B[idx] = 1;
        }
        rmax = max(rmax,r);
    }
    int lmax = INT_MAX;
    for(int i = n-1; i >= 0; i--){
        auto k = v[i];
        pair<int,int> p = k.first;
        int idx = k.ss;
        int r = -p.ss;
        if(r >= lmax){
            A[idx] = 1;
        }
        lmax = min(lmax,r);
    }

    for(auto i:A){
        cout << i << " ";
    }
    cout << "\n";

    for(auto i:B){
        cout << i << " ";
    }
    cout << "\n";
    

    return 0;
}