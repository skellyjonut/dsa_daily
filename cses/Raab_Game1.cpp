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
        int a,b,N;
        cin >> N >> a >> b;
        vector<int> A(N);
        vector<int> B(N);
        if(a+b > N || (a==0 && b > 0) || (b == 0 && a > 0)){
            cout << "NO" << "\n";
        } 
        else{
            for(int i = 0 ; i < N; i++){
                A[i] = i+1;
            }
            int ties = N-(a+b);
            int new_max = N-ties;
            int cnt = 1;
            for(int i = b; i < new_max;i++){
                B[i] =  cnt;
                cnt++;
            }
            for(int i = 0 ; i < b; i++){
                B[i] = cnt;
                cnt++;
            }
            for(int i = new_max ; i < N;i++){
                B[i] = cnt;
                cnt++;
            }
            cout << "YES" << "\n";
            for(auto i:A){
                cout << i << " ";
            }
            cout << "\n";
            for(auto i:B){
                cout << i << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}