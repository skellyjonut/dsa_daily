#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "feris";
    sort(s.begin(),s.end());
    do{
        if(s[0] == 'f' || s[1] !='e' || s[3] == 'r' || s[4] == 's')continue;
        cout << s << "\n";
    }
    while(next_permutation(s.begin(),s.end()));
    return 0;
}