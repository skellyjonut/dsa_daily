#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,m;
    cin >> n >> m;
    vector<vector<char>> res;
    vector<char> p;
    bool flag = true;
    int c = 0;
    for(int i = 0 ; i < n; i++){
        if(i%2 == 0){
            for(int j = 0; j < m;j++){
                cout << '#';
            }
            cout<<"\n";
        }
        else{
            if(c%2 == 1){
                cout << '#';
            }
            for(int j = 0; j < m-1; j++){
                cout << ".";
            }
            if(c%2 == 0){
                cout << '#';
            }
            c++;
            cout << "\n";
        }
    }
    
    return 0;
}