#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,x;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n >> k >> x;
        if(x != 1){
            cout << "YES" << endl;
            cout << n << endl;
            for(int j = 0; j < n; j++){
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            if(k==1){
                cout << "NO" << endl;
            }
            else if(k == 2){
                if(n%2 == 0){
                    cout << "YES"<<endl;
                    cout << n/2 << endl;
                    for(int j = 0; j < n/2; j++){
                        cout << 2 << " ";
                    }
                    cout << endl;  
                }
                else{
                    cout << "NO" << endl;
                }
            }
            else{
                if(n%2 == 0){
                    cout << "YES"<<endl;
                    cout << n/2 << endl;
                    for(int j = 0; j < n/2; j++){
                        cout << 2 << " ";
                    }
                    cout << endl;  
                }
                else{
                    cout << "YES" << endl;
                    cout << (n-3)/2 + 1 << endl;
                    for(int j = 0; j < (n-3)/2; j++){
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                }
            }
        }

    }
}