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

    int t;
    cin >> t;
    while (t--) {
        ll n,x,y;
        cin >> n >> x >> y;
        vector<ll> v(n);
        for(int i = 0 ; i < n; i++)cin >> v[i];

        ll od = 0;
        
        for(int i = 0 ; i < n; i++){
            if(v[i]%2 == 1)od++;
        }
        if(y%2 == 1){
            if(od%2 == 0){
                if(x%2 == 1)cout << "Alice\n";
                else{
                    cout << "Bob\n";
                }
            }
            else{
                if(x%2 == 0)cout << "Alice\n";
                else{
                    cout << "Bob\n";
                }
            }
        }
        else{
            if(od%2 == 0){
                if(x%2 == 0)cout << "Alice\n";
                else{
                    cout << "Bob\n";
                }
            }
            else{
                if(x%2 == 1)cout << "Alice\n";
                else{
                    cout << "Bob\n";
                }
            }
        }
    }

    return 0;
}