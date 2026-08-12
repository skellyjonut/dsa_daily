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
        for (int i = 0; i < n; i++)cin >> v[i];
        // ---- Your logic here ----
        bool z = false;
        for(int i = 0 ; i < n; i++){
            if(v[i]%2 == 1){
                v[i]+= v[i]%10;
            }
            if(v[i]%10 == 0)z = true;
        }
        bool res = true;
        if(z){
            int d = v[0];
            for(int i = 0 ; i < n; i++){
                if(v[i] != d){
                    res = false;
                    break;
                }
            }
        }
        else{
            for(int i = 0 ; i < n; i++){
                while(v[i]%10 != 2){
                    v[i] += v[i]%10;
                }
            }
            int c = v[0]%20; 
            for(int i = 0 ; i < n;i++){
                if(v[i]%20 != c){
                    res = false;
                    break;
                }
            }
        }
        cout << (res?"Yes":"No") << "\n";

    }

    return 0;
}