#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

string flipped(string s){
    string res = "";
    for(auto i:s){
        if(i == '0')res+='1';
        else{
            res+='0';
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a,b;
        cin >> a>> b;
        vector<int> flip(n);
        int zro=0,one = 0;
        for(int i = 0; i < n; i++){
            if(a[i] == '0')zro++;
            else{one++;}
            if(one == zro)flip[i] = 1;
            else{
                flip[i] = 0;
            }
        }
        if(a == b){
            cout << "YES" << "\n";
            continue;
        }
        bool pos = true;
        int l =0;
        for(int i = 0; i < n; i++){
            if(flip[i] == 1){
                string check = b.substr(l,i-l+1);
                string sub1 = a.substr(l,i-l+1);
                string sub2 = flipped(sub1);
                if(check != sub1 && check != sub2){
                    pos = false;
                    break;
                }
                l = i+1;
            }
            if(i == n-1 && flip[i] == 0){
                for(int i =l; i < n; i++){
                    if(a[i] != b[i]){
                        pos = false;
                        break;
                    }
                }
            }
        }
        if(pos)cout << "YES" << "\n";
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}