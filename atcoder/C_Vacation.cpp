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

    int n;
    cin >> n;
    vector<int> res(3,0);
    for(int i = 0 ; i < n; i++){
        vector<int> c(3);
        for(int j = 0; j < 3; j++)cin>>c[j];
        vector<int> temp(3,0);
        for(int j = 0; j < 3;j++){
            for(int k = 0; k < 3; k++){
                if(j != k){
                    temp[k] = max(temp[k],res[j]+c[k]);
                }
            }
        }
        res = temp;
    }
    cout << max({res[0],res[1],res[2]});

    return 0;
}