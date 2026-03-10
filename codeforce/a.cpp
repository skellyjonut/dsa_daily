#include <bits/stdc++.h>
using namespace std;

int main(){
    int s = 0;
    for(int i = 50; i >= 0; i-=2){
        s+=i;
    }
    cout << s;
}