#include <bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cout << "Enter arr Size:";
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cout << "Enter array element";
        cin >> v[i];
    }

    //sorting vector
    sort(v.begin(),v.end());

    int x;
    cout << "Enter element to saerch";
    cin >> x;
    int a = 0;
    int b = v.size() - 1;
    while(a<=b){
        int k = (a+b)/2;
        if(v[k] == x){
            cout << "Element found at " << k;
            break;
        }
        if(v[k] > x){
            b = k-1;
        }
        else{
            a=k+1;
        }
    }
}