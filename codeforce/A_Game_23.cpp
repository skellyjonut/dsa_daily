#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    

    int n,m;
    cin >> n >> m;
    if(m%n != 0){
        cout << -1;
    }
    else{
        int d = m/n;
        int cnt = 0;
        while(d%2 == 0){
            d=d/2;
            cnt++;
        }
        while(d%3 == 0){
            d=d/3;
            cnt++;
        }
        if(d == 1){
            cout << cnt;  
        }
        else{
            cout <<-1;
        }
    }

    return 0;
}