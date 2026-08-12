#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    cin.tie(0);cin.sync_with_stdio(0);
    cout.tie(0);cout.sync_with_stdio(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> v(26,0);
        for(int i = 0; i < n; i++){
            v[s[i]-'a']++;
        }
        int k = 0;
        for(auto i:v){
            if(i > n/2){
                k = i;
                break;
            }
        }
        if(k){
            cout <<  k - (n-k) << "\n";
        }
        else{
            if(n%2 == 0)cout << 0 << "\n";
            else{cout << 1 << "\n";}
        }
    }
    return 0;
}