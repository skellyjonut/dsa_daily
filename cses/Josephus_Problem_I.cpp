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

    int n,a;
    cin >> n;
    queue<int> q;
    for(int i = 0 ; i < n; i++){
        q.push(i+1);
    }
    while(q.size() > 1){
        int x = q.front();
        q.pop();
        int y = q.front();
        q.pop();
        q.push(x);
        cout << y << " ";
    }
    cout << q.front() << " "`;

    return 0;
}