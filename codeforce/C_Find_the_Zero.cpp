#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int qry(int i,int j){
    cout << "? " << i << " " << j << endl;
    cout.flush();
    int res;
    cin >> res;
    if(res == -1)exit(0);
    return res;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = qry(1,2);
        int y = qry(2,3);
        int z = qry(1,3);
        bool f = false;
        if(x == 1 || y == 1)cout << "! " << 2 << endl;
        else if(z == 1)cout << "! " << 3 << endl;
        else{
            for(int i = 4 ; i <= 2*n-2; i+=2){
                int r = qry(i,i+1);
                if(r == 1){
                    cout << "! " << i << endl;
                    f = true;
                    break;
                }
            }
            if(!f)cout << "! " << 2*n << endl;
        }
    }

    return 0;
}