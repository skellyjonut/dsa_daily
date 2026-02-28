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

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n < 180){
            int val = 180-n;
            if(360%val == 0)cout << "YES" << "\n";
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