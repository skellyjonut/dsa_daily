#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool test(ll n,ll m){
    if(n == m)return true;
    if(n%3 != 0)return false;
    else{
        return test(2*(n/3),m) || test(n/3,m);
    }
}

int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        ll n,m;
        cin >> n >> m;
        if(test(n,m)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}