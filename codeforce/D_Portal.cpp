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
        int n,l,r;
        cin >> n >> l >> r;
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin >> v[i];
        vector<int> a;
        for(int i = 0; i < l; i++){
            a.push_back(v[i]);
        }
        for(int i = r; i < n; i++){
            a.push_back(v[i]);
        }
        int mn = INT_MAX;
        int ind = 0;
        for(int i = l ;i < r; i++){
            if(mn > v[i]){
                mn = v[i];
                ind = i;
            }
        }
        int k = 0;
        while(k < a.size() && a[k] < mn){
            k++;
        }
        vector<int> res;
        for(int i = 0; i < k; i++){
            res.push_back(a[i]);
        }
        for(int i = ind; i < r; i++){
            res.push_back(v[i]);
        }
        for(int i = l; i < ind; i++){
            res.push_back(v[i]);
        }
        for(int i = k; i < a.size(); i++){
            res.push_back(a[i]);
        }
        for(auto i:res){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}