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
        /*The idea here is, we can shift factors inbetween the numbers, so the total number of prime factors in 
        every numbers should be divisible by n so we can evenly split it into every elements*/
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            for(int j = 2; j*j <= v[i];j++){
                while(v[i]%j == 0){
                    mp[j]++;
                    v[i]/=j;
                }
            }
            if(v[i] > 1)mp[v[i]]++;
        }
        bool flag = true;
        for(auto i:mp){
            if(i.ss%n != 0){
                flag = false;
                break;
            }
        }
        if(flag)cout << "YES" << "\n";
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}