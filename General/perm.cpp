#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v{1,2,3};
    next_permutation(v.begin(),v.end());
    do{
        for(int i = 0; i < v.size(); i++)cout << v[i] << " ";
        cout << "\n";
    }
    while(next_permutation(v.begin(),v.end()));
    
}