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

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // ---- Your logic here ----
        bool prnt = 0;
        bool flag = true;
        int l = 0, r = n-1;
        while(l<r){    
            if(v[l] == v[r]){
                l++;
                r--;
            }
            else{
                prnt = 1;
                int v1 = v[l],v2 = v[r];
                int l1 = l,r1 = r;
                l1++;
                while(l1<r1){
                    if(v[l1] != v[r1]){
                        if(v[l1] == v1){
                            l1++;
                        }
                        else if(v[r1] == v1){
                            r1--;
                        }
                        else{
                            flag = false;
                            break;
                        }
                    }
                    else{
                        l1++;
                        r1--;
                    }
                }
                if(flag){
                    cout << "YES" << "\n";
                    break;
                }
                flag = true;
                int l2 = l,r2 = r;
                r2--;
                while(l2<r2){
                    if(v[l2] != v[r2]){
                        if(v[l2] == v2){
                            l2++;
                        }
                        else if(v[r2] == v2){
                            r2--;
                        }
                        else{
                            flag = false;
                            break;
                        }
                    }
                    else{
                        l2++;
                        r2--;
                    }
                }
                if(flag){
                    cout << "YES" << "\n";
                    break;
                }
                break;
            }
        }
        if(!flag){
            cout << "NO" << "\n";
        }
        if(flag == true && prnt == 0){
          cout << "YES" << "\n";
        }
    }

    return 0;
}