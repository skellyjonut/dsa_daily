#include <bits/stdc++.h>
using namespace std;

int main(){

    string word = "this is kinda crazy i dont know what to do";
    stringstream iss(word);
    string i;
    while(iss >> i){
        cout << i << endl;
    }
    cout << i;
}