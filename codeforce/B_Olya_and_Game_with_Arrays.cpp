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

    int t,k;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> meg;
        for(int j = 0; j < n; j++){
            cin >> k;
            vector<int> v(k);
            for (int i = 0; i < k; i++) {
                cin >> v[i];
            }
            sort(v.begin(),v.end());
            meg.push_back(v);
        }
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        long long res = 0;
        for(int i = 0; i < n; i++){
            if(meg[i][1] < min2){
                min2 = meg[i][1];
            }
            if(meg[i][0] < min1){
                min1 = meg[i][0];
            }
            res+=meg[i][1];
        }
        res = res - min2 + min1;
        cout << res << "\n";
    }

    return 0;
}