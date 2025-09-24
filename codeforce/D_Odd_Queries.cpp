#include <bits/stdc++.h>
using namespace std;

int main(){
    int  l;
    cin >> l;
    while(l--){
        long long n,q,a,b,c,x;
        cin >> n >> q;
        vector<int> r(n);
        long long sum = 0;
        for(int i = 0 ; i < n;i++){
            cin>>r[i];
            sum+=r[i];
        }
        long long final;
        vector<long long> v(n+1,0);
        for(int i = 1 ; i < n+1;i++){
            v[i] = v[i-1] + r[i-1];
        }
        for(int i = 0 ; i < q; i++){
            cin >> a >> b >> c;
            final = sum - (v[b] - v[a-1]) +  ((b-a+1)*c);
            if(final%2 == 1)cout << "YES" << "\n";
            else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}