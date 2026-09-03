#include<bits/stdc++.h>
using namespace std;
int n = 100;
vector<int> bit;

void update(int i,int x){
    while(i <= n){
        bit[i] += x;
        i += (i&-i);
    }
}

int sum(int i){
    int ans = 0;
    while(i > 0){
        ans += bit[i];
        i -= (i&-i);
    }
    return ans;
}

int main(){
    cout << "Enter Size:";
    cin >> n;
    bit.resize(n+1);
    for(int i = 1; i <= n; i++){
        update(i,i);
    }

    for(int i = 0; i < 5; i++){
        int l,r;
        cin >> l >> r;
        cout << sum(r)-sum(l-1) << "\n";
    }
    // cout << "Sum is :" << sum(n) << "\n";

    return 0;    
}