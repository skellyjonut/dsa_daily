#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int arr_xor(int a){
    int n = a%4;
    if(n == 0){
        return a;
    }
    else if(n == 1){
        return 1;
    }
    else if(n == 2){
        return a+1;
    }
    else{
        return 0;
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll a,b;
        cin >> a >> b;
        ll mex = arr_xor(a-1);
        if(mex == b){
            cout << a << "\n";
        }
        else if((mex ^ b) != a){
            cout << a + 1 << "\n";
        }
        else{
            cout << a + 2 << "\n";
        }
    }

    return 0;
}