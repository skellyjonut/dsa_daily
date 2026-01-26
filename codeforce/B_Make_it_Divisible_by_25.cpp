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

    int t;
    cin >> t;
    while (t--) {
        long long n;
        int  cnt = 0;
        cin >> n;
        bool z = false;
        bool five = false;
        if(n%25 == 0){
            cnt = 0;
            cout << cnt << "\n";
        }
        else{
            while(n > 0){
            int k = n%10;
            if(k == 2 || k == 7){
                if(five){
                    cout << cnt-1 << "\n";
                    break;
                }
            }
            if(k == 0){
                if(z){
                    cout << cnt-1 << "\n";
                    break;
                }
                else{
                    z=true;
                }
            }
            if(k == 5){
                if(z){
                    cout << cnt-1 << "\n";
                    break;
                }
                five = true;
            }
            n = n/10;
            cnt++;
            }
        }
    }

    return 0;
}