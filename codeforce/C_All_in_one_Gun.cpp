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
        ll n,h,k;
        cin >> n >> h >> k;
        vector<ll> v(n);
        for(int i = 0 ; i < n; i++)cin>>v[i];
        ll sum = 0;
        for(auto i:v){
            sum+=i;
        }
        ll c = max(0LL,(h-1)/sum);
        ll res = c*(n+k);
        h=h-(c*sum);
        multiset<ll> st;
        for(int i = 0; i < n; i++){
            st.insert(v[i]);
        }
        ll val = 0;
        ll smallest = INT_MAX;
        for(int i = 0; i < n; i++){
            val+=v[i];
            smallest = min(v[i],smallest);
            st.erase(st.find(v[i]));
            ll curr = val;
            if(!st.empty()){
                ll highest = *st.rbegin();
                if(highest > smallest){
                    curr = val - smallest + highest;
                }
            }
            if(curr >= h){
                res+=(i+1);
                break;
            }
        }
        cout << res << "\n";
    }

    return 0;
}