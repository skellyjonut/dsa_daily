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
        long long n,x;
        cin >> n >> x;
        long long res = 0;
        for(int i = 1; i*i <= x;i++){
            if(x%i == 0){
                if(i <= n && (x/i) <= n){
                    if(i == (x/i))res++;
                    else{
                        res+=2;
                    }
                }
            }
        }
        cout << res;

        return 0;
    }