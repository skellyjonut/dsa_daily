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

    //basically what we have to do is that find any 2 subarrays which are not intesecting in b which have same sum, how can i do that?
    //if there are any 2 same elements that will also work since i can make a single element array 

    /*EDIT - i just checked the solution, wow this question is so beautiful, or should i say im so dumb
    //if there are duplicate we automatically get yess cus we take them as an subbaray or else
    NO is the answer just think about it we cant make a larger power of 2 from lower power of 2
    for eg; to make 2^3 we cant with 2^2 and 2^1 just think about bits so duplicates are the only option*/

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)cin >>v[i];
        set<int> s;
        for(auto i:v){
            s.insert(i);
        }
        if(s.size() < n){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }

    return 0;
}