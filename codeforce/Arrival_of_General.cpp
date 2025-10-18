#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	vector<int> v[t];
	for(int i = 0; i < t;i++){
	    cin >> v[i];
	}
	int min =0, max = 0;
	for(int i = 0; i < t; i++){
	    if(v[min] > v[i]){
	        min = i;
	    }
	    if(v[max] < v[i]){
	        max = i;
	    }
	}
	int res =max + (t-1-min);
	if(max > min){
	    cout << res - 1;
	}
	else{
	    cout << res;
	}
}
