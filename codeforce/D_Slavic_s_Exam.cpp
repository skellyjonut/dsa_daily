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
        string s,t;
        cin >> s >> t;
        int idx = 0;
        for(int i = 0 ;i < s.size();i++){
            if(s[i] == '?'){
                if(idx < (int)t.size())s[i]=t[idx++];
                else{
                    s[i]='a';
                }
            }
            else if(s[i] == t[idx])idx++;
        }
        if(idx >= t.size())cout << "YES\n" << s << "\n";
        else{
            cout << "NO\n";
        }
    }
    return 0;
}