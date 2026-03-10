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
    vector<int> pos(1e6+1,0);
    for(ll i = 2; i < 10000; i++){
        ll cur = i*i*i;
        ll val = (cur-1)/(i-1);
        while(val <= 1e6){
            pos[val]=1;
            cur*=i;
            val = (cur-1)/(i-1);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(pos[n]){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}