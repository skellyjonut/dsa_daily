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

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i]; 

    int mx = v[0];
    int res = 1;
    for(int i = 1 ; i < n; i++){
        if(v[i] > mx){
            res++;
            mx = v[i];
        }
    }
    cout << res;

    return 0;
}