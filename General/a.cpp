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
        ll n,temp;
        cin >> n;
        set<ll> dig;
        temp = n;
        while(temp > 0){
            if(temp%10 != 0)dig.insert(temp%10);
            temp/=10;
        }
        ll to_mult = 1;
        for(auto i:dig){
            if(i == 2){
                if(dig.find(4) == dig.end() && dig.find(8) == dig.end() && dig.find(6) == dig.end()){
                    to_mult*=i;  
                }
            }
            else if(i == 3){
                if(dig.find(6) == dig.end() && dig.find(9) == dig.end()){
                    to_mult*=i;
                }
            }
            else if(i == 4){
                if(dig.find(8) == dig.end()){
                    to_mult*=i;
                }
            }
            else{
                to_mult*=i;
            }
        }
        if(n%to_mult == 0){
            cout << n << "\n";
        }
        else{
            ll add = to_mult - (n%to_mult);
            cout << add << "\n";
		cout << to_mult << "\n";
		cout << n%to_mult << "\n";
            n+=add;
            cout << n << "\n";
        }
        
    }

    return 0;
}
