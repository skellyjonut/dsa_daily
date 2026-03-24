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
        int n;
        cin >> n;
        vector<int> v(n,10);
        int a;
        string s;
        for(int i = 0 ; i < n; i++){
            int l = 0;
            cin >> s;
            for(int j = 0 ; j < n; j++){
                if(i == j)continue;
                if(s[j] == '1' && i > j)l++;
                if(s[j] == '0' && i < j)l++;
            }
            v[l] = i+1;
        }
        for(auto i:v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}