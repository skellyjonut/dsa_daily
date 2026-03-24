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

    ll n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0 ; i < n; i++)cin>>v[i];

    ll sum = 0;
    multiset<ll> ms;
    for(auto i:v){
        sum+=i;
        ms.insert(i);
    }

    vector<ll> res;

    for(int i = 0 ; i < n; i++){
        ll new_sum = sum - v[i];
        ms.erase(ms.find(v[i]));
        ll mx = *ms.rbegin();
        if(new_sum == 2*mx)res.push_back(i+1);

        ms.insert(v[i]);
    }

    cout << res.size() << "\n";
    for(auto i:res){
        cout << i << " ";
    }

    return 0;
}