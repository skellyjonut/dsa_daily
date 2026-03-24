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
    vector<int> in(n),out(n);
    set<int> st;
    for(int i = 0 ; i < n; i++){
        cin >> in[i];
        st.insert(in[i]);
    }
    for(int i = 0 ; i < n; i++){
        cin >> out[i];
    }
    int l = 0;
    int r = 0;
    int res = 0;
    while(l < n){
        if(st.count(in[l])){
            int val = in[l];
            while(r < n && out[r] != val){
                res++;
                st.erase(out[r]);
                r++;
            }
            r++;
        }
        l++;
    }
    cout << res;

    return 0;
}