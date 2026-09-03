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

    int t = 1;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n+1),b(n+1);
        map<int,int> mp;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            b[i] = v[i];
        }
        sort(b.begin()+1,b.end());

        for(int i = 1; i <= n; i++){
            mp[b[i]] = i;
        }

        int L = -1,R=-1;
        for(int i = 1 ; i <= n; i++){
            if(i != mp[v[i]]){
                if(L==-1)L = i;
                R = i;
            }
        }
        if(L == -1){
            cout << "yes\n";
            cout << 1 << " " << 1 << "\n";
            continue;
        }
        int t1 = L,t2=R;
        while(L <= R){
            swap(v[L],v[R]);
            L++;
            R--;
        }
        if(is_sorted(v.begin()+1,v.end())){
            cout << "yes\n";
            cout << t1 << " " << t2 << "\n";
        }
        else{
            cout << "no\n";
        }

    }

    return 0;
}