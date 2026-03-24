#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
const int M = 1000000;
bool is_prime[M+1];
vector<ll> st;

void sieve(){
    fill(is_prime,is_prime+M+1,true);
    is_prime[0] =is_prime[1] = false;
    for(ll p = 2; p*p <= M; p++){
        if(is_prime[p]){
            for(ll i = p*p; i <= M;i+=p){
                is_prime[i] = false;
            }
        }
    }
    for(ll i = 0 ; i < M+1;i++){
        if(is_prime[i]){
            st.push_back(i*i);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    ll n,a;
    cin >> n;
    sieve();
    for(int i = 0; i < n;i++){
        cin >> a;
        if(binary_search(st.begin(),st.end(),a)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}