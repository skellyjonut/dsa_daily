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
        int n;
        cin >> n;
        cin >> s;
        for(char i = 'a'; i <= 'z';i++){
            if(s.find(i) == string::npos){
                cout << i << "\n";
                goto done;
            }
        }
        for(char i = 'a'; i <= 'z'; i++){
            for(char j = 'a'; j <= 'z'; j++){
                string word;
                word.push_back(i);
                word.push_back(j);
                if(s.find(word) == string::npos){
                    cout << word << "\n";
                    goto done;
                }
            }
        }
        for(char i = 'a'; i <= 'z'; i++){
            for(char j = 'a'; j <= 'z'; j++){
                for(int k ='a'; k<= 'z';k++){
                    string word;
                    word.push_back(i);
                    word.push_back(j);
                    word.push_back(k);
                    if(s.find(word) == string::npos){
                        cout << word << "\n";
                        goto done;
                    }
                }
            }
        }
        done:;
    }

    return 0;
}