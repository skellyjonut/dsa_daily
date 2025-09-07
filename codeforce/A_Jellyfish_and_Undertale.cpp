#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    long long n,a,b;
    cin >> t;
    while (t--) {
        cin >> b >> a >> n;
        vector<int> tools(n);
        for(int i = 0; i < n;i++){
            cin >> tools[i];
        }
        long long res = 0;
        if(a!=1){
            res = a-1;
        }
        for(int i = 0; i < n; i++){
            if(tools[i] >= b-1){
                res=res+(b-1);
            }
            else{
                res = res+tools[i];
            }
        }
        cout << res+1 << "\n";
    }
    return 0;
}