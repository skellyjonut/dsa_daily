#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string t = "";
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                t += 'a';
            else
            {
                t += 'b';
            }
        }
        bool flag = true;
        int l = 0, r = n - 1, i = 0;
        while (l <= r){
            if (s[i] == '?'){
                if(t[l] == t[r]){
                    l++;
                    i++;
                } 
                if(i == n-1){
                    if(t[l] == s[i]){
                        cout << "YES" << "\n";
                        break;
                    }
                }
                if(t[i+1] == '?'){
                    l++;
                    r--;
                    i++;
                }
                else if(t[i+1] == 'a'){
                    if(t[l] == 'b')l++;
                    else{
                        r--;
                    }
                }
                else{
                    if(t[l] == 'a')l++;
                    else{
                        r--;
                    }
                }
            }
            else{
                char let = s[i];
                if (s[i] == t[l]){
                    l++;
                }
                else if (s[i] == t[r]){
                    r--;
                }
                else{
                    cout << "NO" << "\n";
                    break;
                }
            }
        }
    }

    return 0;
}