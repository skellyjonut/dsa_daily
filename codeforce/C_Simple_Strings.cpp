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

    string s;
    cin >> s;
    int n = s.size();
    vector<char> res(n);
    res[0] = s[0];
    for(int i = 1;i < n;i++){
        if(s[i] == s[i-1]){
            for(char j = 'a'; j <= 'z';j++){
                if(j != s[i-1]){
                    if(i < n-1 && j != s[i+1]){
                        s[i] = j;
                    }
                    else if(i == n-1){
                        s[i] = j;
                        break;
                    }
                }
            }
        }
    }
    cout << s;

    return 0;
}