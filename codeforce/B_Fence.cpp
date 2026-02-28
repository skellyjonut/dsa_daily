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

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll sum = 0;
    ll res = INT_MAX;
    for (int i = 0; i < k; i++)
    {
        sum += v[i];
    }
    res = 1;
    ll prev = sum;
    for (int i = k; i < n; i++)
    {
        sum = sum + (v[i] - v[i - k]);
        if(sum < prev)res = i-(k-1)+1;
        prev = min(prev,sum);
    }
    cout << res;

    return 0;
}