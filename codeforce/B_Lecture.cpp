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

    int n,m;
    cin >> n >> m;
    string a,b;

    set<string> best; //for the best string

    unordered_map<string,string> mp; //if the prof says the badder string, it maps bad -> best


    for(int i = 0;i < m; i++){
        string c,d;
        cin >> a >> b; 
        if(a.size() <= b.size()){
            best.insert(a);
            c = a;
            d = b;
        }
        else{
            best.insert(b);
            c = b;
            d = a;
        }
        mp[d] = c;
    }
    string res = "";
    string line;
    for(int i = 0; i < n; i++){
        cin >> line;
        if(best.find(line) != best.end()){
            res = res + line + " ";
        }
        else{
            res = res + mp[line] + " ";
        }
    }
    res.pop_back();
    cout << res;
    return 0;
}