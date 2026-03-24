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

    int n,k;
    cin >> n >>k;
    vector<int> v(n);
    vector<int> pref(n+1,0);
    for(int i = 0 ; i < n; i++)cin >> v[i];
    for(int i = 0 ; i < k; i++){
        int a,b;
        cin >>a>>b;
        pref[a-1]++;
        pref[b]--;
    }
    for(int i = 1 ; i < n;i++){
        pref[i] = pref[i]+pref[i-1];
    }
    for(int i = 0 ; i < n; i++){
        cout << v[i] + pref[i] << " ";
    }

    return 0;
}