#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define mp make_pair

int extendGcd(int a, int b , int &x, int &y){
    if(a == 0){
        x = 0;
        y = 1;
        return b;
    }
    int x1,y1;
    int g = extendGcd(b%a,a,x1,y1);
    x = y1 - (b/a)*x1;
    y=x1;
    return g;
}

bool isTrue(int a,int b, int c, int &x0, int &y0){
    int g = extendGcd(a,b,x0,y0);
    if(c%g !=0)return false;
    return true;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int c,a,b,x0,y0;
    cin >> a >> b >> c;
    if(isTrue(a,b,c,x0,y0))cout << "Yes" << "\n";
    else{
        cout << "No" << "\n";
    }

    return 0;
}