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
        ll n;
        cin >> n;
        vector<int> v;
        v.push_back(1);
        int cnt = 1;
        int flip = true;
        for(int i = n-1; i >= 1; i--){
            if(flip){
                cnt+=i;
                v.push_back(cnt);
                flip = false;
            }
            else{
                cnt-=i;
                v.push_back(cnt);
                flip = true;
            }
        }
        reverse(v.begin(),v.end());
        for(auto i: v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}