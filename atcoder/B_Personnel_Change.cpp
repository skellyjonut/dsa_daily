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

    int n,m,a,b;
    cin >> n >> m;
    vector<int> v(m,0);
    for(int i = 0 ; i < n; i++){
        cin >> a >> b;
        v[a-1]--;
        v[b-1]++;
    }   
    for(auto i: v){
        cout << i << "\n";
    }

    return 0;
}