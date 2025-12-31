#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> mp;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (mp.find(s) != mp.end())
        {
            cout << s + to_string(mp[s]) << endl;
            mp[s]++;
        }
        else
        {
            cout << "OK" << endl;
            mp[s] = 1;
        }
    }
}
