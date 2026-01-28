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
    int n, l, r;
    cin >> n;
    bool found = false;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            l = i;
            r = i + 1;
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "YES" << "\n";
        cout << l << " " << r << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }

    return 0;
}