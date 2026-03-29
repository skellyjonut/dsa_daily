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
        int n,m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        // ---- Your logic here ----
        vector<int> dig;
        ll tot = 0;
        for(auto i:v){
            int cnt = 0;
            while(i%10 == 0){
                cnt++;
                tot++;
                i/=10;
            }
            while(i > 0){
                tot++;
                i/=10;
            }
            dig.push_back(cnt);
        }
        sort(dig.rbegin(),dig.rend());
        
        // since sasha can always use the first element which anna has reversed as a number to make the second 
        // largest trailing zero number into a concatenated bigger number 


        for(int i = 0; i < n; i+=2){
            tot -= dig[i];
        }
        if(tot > m){
            cout << "Sasha" << "\n";
        }
        else{
            cout << "Anna\n";
        }
    }

    return 0;
}