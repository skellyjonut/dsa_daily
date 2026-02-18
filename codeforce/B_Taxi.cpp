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

    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    int one = 0,two=0,three=0,four=0;
    for(int i =0; i < n;i++){
        if(v[i] == 1)one++;
        if(v[i] == 2)two++;
        if(v[i] == 3)three++;
        if(v[i] == 4)four++;
    }
    int car = 0;
    car+=four;
    car+=three;
    one-=min(one,three);
    car = car + two/2;
    if(two%2 == 1){
        car++;
        one-=min(one,2);
    }
    car = car + (one+3)/4;
    cout << car << "\n";
    return 0;
}