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
        vector<int> v(n);
        for(int i = 0; i < n;i++)cin >> v[i];
        
        for(int i = (n%2) ; i < n;i+=2){
            if(i+1 < n && v[i+1] < v[i]){
                int temp = v[i+1];
                v[i+1] = v[i];
                v[i] = temp;
            }
        }
        if(is_sorted(v.begin(),v.end())){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}