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
        int n;
        cin >> n;

        vector<int> v(n);
        priority_queue<int> pq;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            pq.push(v[i]);
        }
        int cond = 1;
        int to_find;
        vector<int> res;
        vector<int> rev;
        for(int i = 0; i < n;i++){
            if(cond){
              if(v[i] == pq.top()){
                pq.pop();
                res.push_back(v[i]);
              }
              else{
                cond = 0;
                to_find = pq.top();
                rev.push_back(v[i]);
              }
            }
            else{
                if(v[i] == to_find){
                    rev.push_back(v[i]);
                    reverse(rev.begin(),rev.end());
                    res.insert(res.end(),rev.begin(),rev.end());
                    i++;
                    while(i < n){
                        res.push_back(v[i]);
                        i++;
                    }
                }
                else{
                    rev.push_back(v[i]);
                }
            }
        }
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}