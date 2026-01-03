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

    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    queue<int> q;
    for(int i = 0; i < n;i++){
        cin >> v[i];
        q.push(i);
    }
    while(q.size() != 1){
        int t = q.front();
        q.pop();
        if(v[t] > m){
            v[t] = v[t]-m;
            q.push(t);
        }
    }
    cout << q.front()+1;
    return 0;
}
