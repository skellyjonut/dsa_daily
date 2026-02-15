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

        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        vector<int> q(k);
        vector<int> first_pos(51,0);
        for (int i = 1; i <= n; i++) {
            int color;
            cin >> color;
            if(first_pos[color] == 0){
                first_pos[color] = i;
            }
        }
        for(int i = 0; i<k; i++){
            int color;
            cin >> color;
            int ans = first_pos[color];
            for(int j = 1; j <= 50;j++){
                if(first_pos[j] < ans){
                    first_pos[j]++;
                }
            }
            first_pos[color] = 1;
            cout << ans << " ";
        }

    return 0;
}