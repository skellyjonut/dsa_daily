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
        long long n,x1=0,x2=0,res,c;
        cin >> n;
        for(int i = n+1; ;i++){
            c = 1;
            for(int j = 2; j*j <= i; j++){
                if(i%j == 0){
                    t=0;
                    break;
                }
            }
            if(c){
                x1 = i;
                break;
            }
        }
        for(int i = n+x1; ;i++){
            c=1;
            for(int j = 2; j*j <= i; j++){
                if(i%j == 0){
                    c=0;
                    break;
                }
            }
            if(c){
                x2 = i;
                break;
            }
        }
        res = min(x1*x2,x1*x1*x1);
        cout << res << "\n";
    }

    return 0;
}