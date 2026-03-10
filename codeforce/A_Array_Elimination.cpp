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
        // ---- Your logic here ----
        vector<int> bits(30,0);
        int zro = 0;
        for(int i = 0 ; i < n; i++){
            int a = v[i];
            if(a == 0)zro++;
            for(int j = 0; j < 30; j++){
                if(a&(1<<j))bits[j]++;
            }
        }   
        ll res = 0;
        for(auto i:bits){
            res = gcd(res,i);
        }
        ll cnt = 0;
        vector<int> divs;
        for(int i = 1; i*i <= res; i++){
            if(res%i == 0){
                divs.push_back(i);
                if(i*i != res){
                    divs.push_back(res/i);
                }
            }
        }
        sort(divs.begin(),divs.end());
        if(zro == n){
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
            cout << "\n";
            continue;
        }
        for(auto i :divs){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}