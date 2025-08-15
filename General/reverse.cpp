#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 8, 5, 2, 25};
    stack<int> st;
    vector<int> res(5);
    for(int i = 4; i >=0; i--){
        while(!st.empty() && arr[i] < st.top()){
            st.pop();
        }
        if(st.empty()){
            st.push(arr[i]);
            res[i] = -1;
        }
        else{
            res[i] = st.top();
            st.push(arr[i]);
        }
    }
    for(auto i:res){
        cout << i << " ";
    }

}