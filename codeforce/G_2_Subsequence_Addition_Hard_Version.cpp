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
        bool cond = true;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll sum = 0;
        sort(v.begin(),v.end());
        if(v[0] != 1){
            cout << "NO" << "\n";
        }
        else{
            int i = 0;   
            while(i < n && v[i] == 1){sum++;i++;}
            for(;i<n;i++){
                if(sum >= v[i]){
                    sum+=v[i];
                }
                else{
                    cout << "NO" << "\n";
                    cond = false;
                    break;
                }
            }
            if(cond)cout << "YES" << "\n";
        }
    }

    return 0;
}