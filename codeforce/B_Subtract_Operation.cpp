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
        ll n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin>>v[i];
        set<int> st;
        for(auto i:v){
            st.insert(i);
        }
        bool found = false;
        for(auto i:v){
            if(st.count(i-k)){found = true;break;}
        }
        if(found){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}