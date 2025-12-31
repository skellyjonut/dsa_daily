#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,a;
    vector<int> st(4);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        st[a-1]++;
    }
    int res = 0;
    res+=st[3];
    res+=st[2];
    if(st[2] >= st[1]){
        st[1] = 0;
    }
    else{
        st[0] = st[0]-st[2];
    }
    if(st[1]%4 == 2){
        if(st[0] <= 2)st[0]=0;
        res+=st[1]/2;
    }
    res = res+ (st[0]+4-1)/4;
    cout << res;
}