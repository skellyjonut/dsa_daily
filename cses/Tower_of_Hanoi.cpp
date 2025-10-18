
#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int>> v;
void hanoi(int n,int a, int b, int c){
    if(n == 1){
        v.push_back({a,c});
        return;
    }
    hanoi(n-1,a,c,b);
    v.push_back({a,c});
    hanoi(n-1,b,a,c);
    return;
}
int main()
{
    int n;
    cin >> n;
    hanoi(n,1,2,3);
    cout << v.size() << "\n";
    for(auto i: v){
        cout << i.first << " " << i.second <<"\n";
    }
    return 0;
}
