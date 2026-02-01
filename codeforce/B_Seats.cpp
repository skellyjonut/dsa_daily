#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s = '0' + s + '0';
        ll sum = 0,cnt=0;
        for(char c : s) {
            if(c == '0') {
                cnt++;
            }
            else {
                sum++;
                sum+=(cnt/3);
                cnt = 0;
            }
        }
        sum+=(cnt/3);
        cout << sum << "\n";
    }

    return 0;
}