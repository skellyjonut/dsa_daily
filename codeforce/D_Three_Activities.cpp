#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()


vector<int> findMax(vector<int> &v){
    int n = v.size();
    vector<pair<int,int>> temp(n);
    for(int i = 0; i < n; i++){
        temp[i].ff = v[i];
        temp[i].ss = i;
    }
    sort(temp.rbegin(),temp.rend());
    vector<int> ans;
    for(int i = 0; i < 3; i++){
        ans.push_back(temp[i].ss);
    }
    return ans;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n),b(n),c(n);
        for(int i = 0; i < n; i++)cin>>a[i];
        for(int i = 0; i < n; i++)cin>>b[i];
        for(int i = 0; i < n; i++)cin>>c[i];
        int res = 0;
        vector<int> maxA = findMax(a);
        vector<int> maxB = findMax(b);
        vector<int> maxC = findMax(c);
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    int v1 = maxA[i],v2=maxB[j],v3=maxC[k];
                    if(v1 == v2 || v1 == v3 || v3 == v2)continue;
                    res = max(res,a[v1]+b[v2]+c[v3]);
                }
            }
        }
        cout << res << "\n";
    }

    return 0;
}