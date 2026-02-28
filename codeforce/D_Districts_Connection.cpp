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

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int disc = v[0];
        int dif = 0;
        bool found = false;
        for(int i = 1 ; i < n; i++){
            if(v[i] != disc){
                found = true;
                dif = i;
                break;
            }
        }
        if(found){
            cout << "YES" << "\n";
            for(int i = 1 ; i < n; i++){
                if(v[i] != disc){
                    cout << i+1 << " " << 1 << "\n";
                }
                else{
                    cout << dif+1 << " " << i+1 << "\n";
                }
            }
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}