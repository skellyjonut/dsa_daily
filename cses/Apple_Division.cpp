#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
int n;
vector<int> v(21);
ll res = INT_MAX;
void solve(int i,ll A,ll B){
    if(i == n){
        res = min(res,abs(A-B));
        return;
    }
    solve(i+1,A+v[i],B);
    solve(i+1,A,B+v[i]);
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++)cin >>v[i];
    solve(0,0,0);
    cout << res;    
}