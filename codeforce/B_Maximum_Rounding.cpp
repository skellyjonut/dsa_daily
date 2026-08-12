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
        string s;
        cin >> s;

        s = '0'+s;
        int n = s.size();
        int last_rnd = n;
        for(int i = n-1 ; i >= 0; i--){
            if(s[i] >= '5'){
                s[i-1]++;
                last_rnd = i;
            }   
        }

        for(int i = last_rnd; i < n;i++){
            s[i] = '0';
        }
        if(s[0] == '0'){
            s = s.substr(1);
        }
        cout << s << "\n";
    }
    return 0;
}