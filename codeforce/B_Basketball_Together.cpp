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
    ll n,p;
    cin >> n >> p;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin>>v[i];
      int res = 0;
      int tot = n;
      sort(v.rbegin(),v.rend());
      int cnt = 1;
      for(int i = 0 ; i<n; i++){
          if(v[i] > p){
              res++;
              tot--;
          }
          else{
              while(cnt*v[i] <= p){
                  cnt++;
              }
              tot=tot-cnt;
              if(tot < 0){
                break;
              }
              else{
                  res++;
              }
          }
      }
      cout << res << "\n";
  return 0;
}