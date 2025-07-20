#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    vector<int> v1;
    vector<int> v2;
    long long t = (n*(n+1)/2)/2;
    
    if((n*(n+1)/2)%2 == 1){
        cout << "NO";
        return 0;
    }
    else{
        cout << "YES" << endl;
        for(long long i =n; i >=1;i--){
            if(i <= t){
                v1.push_back(i);
                t=t-i;
            }
            else{
                v2.push_back(i);
            }
        }
        cout << v1.size() << endl;
        for(long long i:v1){
            cout << i << " ";
        }
        cout << endl;
        cout << v2.size() << endl;
        for(long long i : v2){
            cout << i << " ";
        }
    }
}