#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    int a,b,c,d,k;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> d;
        if(max(a,b) <= 2*(min(a,b)+1)){
            if(max(c-a,d-b) <= 2*(min(c-a,d-b)+1)){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}