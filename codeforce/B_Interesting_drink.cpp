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

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // ---- Your logic here ----

    vector<int> prfx(n);
    sort(v.begin(), v.end());
    prfx[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prfx[i] = prfx[i - 1] + v[i];
    }
    int q, m;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> m;
        auto it = upper_bound(v.begin(), v.end(), m);
        int indx = it - v.begin();
        cout << indx << "\n";
    }

    return 0;
}