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
        int n,r,b;
        cin >> n >> r >> b;
        int p = r/(b+1);
        int q = r%(b+1);
        string s = "";
        while(s.length()!= n){
            for(int j = 0; j < p;j++){
                s=s+"R";
            }
            if(s.length() == n)break;
            if(q!=0){
                s=s+"R";
                q--;
            }
            s=s+"B";
        }
        cout << s << "\n";
    }

    return 0;
}