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
    for(int i = 0; i < n; i++)cin >> v[i];
    vector<int> res(n);
    int cnt = 0;
    set<int> st;
    for(int i = n-1; i >= 0; i--){
        if(st.count(v[i])){

        }
        else{
            st.insert(v[i]);
            cnt++;
        }
        res[i] = cnt; 
    }
    int a;
    for(int i = 0; i < m; i++){
        cin >> a;
        a--;
        cout << res[a] << "\n";
    }
    return 0;
}