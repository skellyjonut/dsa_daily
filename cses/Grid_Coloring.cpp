#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
int n,m;
void solve(int i,int j,vector<string> &v){
    set<char> st = {'A','B','C','D'};
    if(i+1 < n){
        st.insert(v[i+1][j]);
    }
    if(j+1 < m){
        st.insert(v[i][j+1]);
    }
    st.erase(v[i][j]);
    if(i-1 >= 0){
        st.erase(v[i-1][j]);
    }
    if(j-1 >= 0){
        st.erase(v[i][j-1]);
    }
    v[i][j] = *st.begin();
}


int main(){
    cin >> n >> m;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            solve(i,j,v);
        }
    }
    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";
    }
}