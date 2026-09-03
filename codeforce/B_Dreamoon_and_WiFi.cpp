#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin >> s1 >> s2;

    int ans = 0;
    for(auto i:s1){
        if(i == '+')ans++;
        else{ans--;}
    }
    int q = 0,t=0;
    for(auto i:s2){
        if( i == '+')t++;
        else if(i == '-')t--;
        else{
            q++;
        }
    }
    double res;
    if(q == 0){1
        if(t == ans)res = 1;
        else{
            res = 0;
        }
    }
    else{
        int d = abs(t-ans);
        if(q < d || (q+d)%2 != 0)res = 0;
        else{
            int m = (d+q)/2;
            int c= 1;
            for(int i = 0 ; i < m; i++){
                c *= (q-i);
            }
            for(int i = 2; i <= m; i++){
                c /= i;
            }
            res = (double)c/(1 << q);
        }
    }
    cout << fixed << setprecision(12) << res;

    return 0;
}