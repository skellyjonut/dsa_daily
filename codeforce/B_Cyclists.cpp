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
        int n,k,p,m;
        cin >> n >> k >> p >> m;
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
        }
        set<pair<int,int>> st;
        queue<pair<int,int>> q;
        for(int i = 1; i <= k;i++){
            st.insert({v[i],i});
        }
        for(int i = k+1; i <= n; i++){
            q.push({v[i],i});
        }
        int sum = 0;
        int res = 0;
        while(sum < m){
            if(st.count({v[p],p})){
                if(sum+v[p] <= m){
                    res++;
                    sum+=v[p];
                    st.erase({v[p],p});
                    q.push({v[p],p});
                    pair<int,int> pr = q.front();
                    q.pop();
                    st.insert(pr);
                }
                else{
                    break;
                }
            }
            else{
                pair<int,int> pr = *st.begin();
                sum+=pr.ff;
                st.erase(st.begin());
                q.push(pr);
                pair<int,int> ps = q.front();
                q.pop();
                st.insert(ps);

            }
        }
        cout << res << "\n";
    }

    return 0;
}