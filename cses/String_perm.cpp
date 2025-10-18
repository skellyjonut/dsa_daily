#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<string> st;
    sort(s.begin(),s.end());
    do{
        st.insert(s);
    }
    while(next_permutation(s.begin(),s.end()));
    cout << st.size() << "\n";
    for(auto i:st){
        cout << i << "\n";
    }

}