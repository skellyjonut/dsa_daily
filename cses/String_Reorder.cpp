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
    
    string ans = "";
    int c = 0;
    vector<int> freq(26,0);
    for(auto i:s){
        freq[i - 'A']++;
    }
    int n = s.length();
    char prev = '\0';
    for(int i = 0 ; i < n; i++){
        for(int j = 0; j < 26; j++){
            char ch = 'A'+j;
            if(freq[j] == 0 || ch == prev)continue;
            freq[j]--;
            bool cond = true;
            int suff = n-i-1;
            for(int k = 0; k < 26;k++){
                if(k!=j){
                    if(freq[k] > (suff+1)/2){
                        cond = false;
                        break;
                    }
                }
                else{
                    if(freq[k] > (suff)/2){
                        cond = false;
                        break;
                    }
                }
            }
            if(cond){
                ans.push_back('A'+j);
                prev = 'A'+j;
                break;
            }
            else{
                freq[j]++;
            }
        }
    }
    if(ans.length() == n){
        cout << ans;
    }
    else{
        cout << -1;
    }

    return 0;
}