#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int const M = 676767677;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a,b;
        cin >> a >> b;
        int dif = abs(a-b);
        ll res = 1;
        if(a == 0 || b == 0){
            cout << 1 << "\n";
        }
        else if(dif == 0)cout << 1 << "\n";
        else{
            int cnt = 1;
            dif--;
            while(dif != 0){
                if(dif < cnt)break;
                if(dif%cnt == 0)res++;
                cnt++;
                dif--;
            }
            cout << res%M << "\n";
        }
        vector<int> v;
        for(int i = 0; i < a;i++){
            v.push_back(1);
        }
        for(int i = 0; i < b;i++){
            v.push_back(-1);
        }
        for(auto i:v){
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}