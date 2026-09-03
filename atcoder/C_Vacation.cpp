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
        int a,b,c;
        vector<int> v(3,0);
        vector<int> temp(3,0);
        cin >> v[0] >> v[1] >> v[2];
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(j != k){
                    temp[j] = max(temp[j],res[k]+v[j]);
                }
            }
        }
        res=temp;
    }
    cout << max({res[0],res[1],res[2]});

    return 0;
}