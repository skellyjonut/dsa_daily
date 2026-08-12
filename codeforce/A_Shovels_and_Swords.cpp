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
        //shovels and swords
        //each can be sold for exactly one diamond,so either 2x+y or 2y+x with
        //it cant be greater than a or b,with
        int a,b;
        cin >> a >> b;
        cout << min(a,min(b,(a+b)/3)) << "\n";
    }
    return 0;
}