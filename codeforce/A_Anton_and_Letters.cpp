#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    getline(cin,s);

    unordered_map<char,int> mp;

    for(auto i:s){
        if(i >= 'a' && i <= 'z')mp[i]++;
    }
    cout << mp.size();
    return 0;
}