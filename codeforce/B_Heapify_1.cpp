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
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        bool pos = true;
        for(int i = 1; i <= n; i++){
            if(v[i] == i)continue;
            bool found = false;
            for(int j = 2*i; j <= n; j=j*2){
                if(v[j] == i){
                    v[j] = v[i];
                    v[i] = i;
                    found = true;
                    break;
                }
            }
            if(!found){
                pos = false;
                break;
            }
        }
        if(pos)cout << "YES" << "\n";
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}