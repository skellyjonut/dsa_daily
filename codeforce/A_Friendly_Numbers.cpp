#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()


int digitSum(int x){
    int res = 0;
    while(x > 0){
        res+=x%10;
        x/=10;
    }
    return res;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        int res = 0;
        for(int i = n+1 ; i <= n+81; i++){
            if(i - digitSum(i) == n)res++;
        }
        cout << res << "\n";
    }

    return 0;
}