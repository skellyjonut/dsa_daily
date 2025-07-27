#include <bits/stdc++.h>

using namespace std;

int main(){

    long long t,n,x;
    cin >> t;
    vector<long long> ve;
    for(long long i = 0 ; i <t; i++){
        cin >> n >> x;
        vector<long long> v(n);
        for(long long j=0;j<n;j++){
            cin >> v[j];
        }
        long long res = INT_MIN;

        for(long long k = 1; k <n-1;k++){
            res = max(res,v[k+1] - v[k]);
        }
        res = max(res,(2*(x-v[n-1])));
        ve.push_back(res);
    }
    for(auto i:ve){
        cout << i << endl;
    }
}