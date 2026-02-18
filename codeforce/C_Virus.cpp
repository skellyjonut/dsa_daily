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
        int n,k;
        cin >> n >> k;
        vector<int> v(k);
        for(int i = 0;i < k;i++)cin>>v[i];
        sort(v.begin(),v.end());
        vector<int> gap;
        for(int i = 0; i < k-1; i++){
            gap.push_back(v[i+1]-v[i]-1);
        }
        gap.push_back(n-v[k-1] + v[0]-1);
        sort(gap.rbegin(),gap.rend());
        int save = 0,days = 0;
        for(auto i: gap){
            int cur = i - 2*days;
            if(cur > 0){
                save++;
                cur-=2;
                if(cur > 0){
                    save+= cur;
                }
                days+=2;
            }
        }
        cout << n-save << "\n";
    }

    return 0;
}