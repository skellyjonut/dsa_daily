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
        string s;
        cin >> s;
        int cnt = 0;
        for(auto i:s){
            if(i == '0')cnt++;
        }
        if(cnt == 1 || cnt%2 == 0){
            cout << "BOB" << "\n";
        }
        else{
            cout << "ALICE" << "\n";
        }
    }

    return 0;
}