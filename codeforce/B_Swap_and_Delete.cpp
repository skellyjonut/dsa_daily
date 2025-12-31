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
        string s;
        cin >> s;
        int n = s.size();
        int z = 0;
        int o = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1')o++;
            else{
                z++;
            }
        }
        int k = 0;
        if(z == o)cout << 0 << "\n";
        else{
           while(o >= 0 && z >= 0 && k < n){
            if(s[k] == '1'){
                if(z == 0){
                    cout << o+z <<"\n";
                    break;
                }
            z--;
            }   
            else{
                if(o == 0){
                    cout << z << "\n";
                    break;
                }
                o--;
            }
            k++;
            } 
        }
    }

    return 0;
}