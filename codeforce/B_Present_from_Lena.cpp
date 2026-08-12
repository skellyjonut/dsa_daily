#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int n;
    cin >> n;
    for(int i = 0 ; i < 2*n+1; i++){
        int k = abs(n-i);
        
        for(int j = 0; j < k; j++){
            cout << "  ";
        }
        int m = n-k;
        for(int j = 0; j < m;j++){
            cout << j << " ";
        }
        cout << m;
        for(int j = m-1 ; j>=0;j--){
            cout << " " << j;
        }
        cout << "\n";
    }
    return 0;
}