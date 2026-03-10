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
        vector<int> dig;
        while(n > 0){
            int d = n%10;
            dig.push_back(d);
            n = n/10;
        }
        sort(dig.begin(),dig.end());
        int sum = 0;
        int l = 0;
        for(l = 0; l < dig.size();l++){
            sum+=dig[l];
            if(sum >= 10){
                break;
            }
        }
        int ops = dig.size() - l;
        cout << ops << "\n";
    }

    return 0;
}