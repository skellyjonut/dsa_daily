#include <bits/stdc++.h>

using namespace std;
vector<int> vr = {4,5,2,10,8};
stack<int> st;
vector<int> res;

vector<int> smallest(vector<int> v){
    for(int i = 0;i < v.size(); i++){
        while(!st.empty() && st.top() >= v[i]){
            st.pop();
        }
        if(st.empty()){
            res.push_back(-1);
            st.push(v[i]);
        }
        else{
            res.push_back(st.top());
            st.push(v[i]);
        }
    }
    return res;
}

int main(){
    vector<int> i = smallest(vr);
    for(auto j:i){
        cout << j << " ";
    }
}