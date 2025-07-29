#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;
    string s;
    for(int i = 0 ; i < t; i++){
        int x,res=0;
        for(int j=0;j<10;j++){
            x = 0;
            cin >> s;
            for(auto c:s){
                if(c == 'X'){
                    if(j == 0 || j == 9 || x == 0 || x == 9){
                        res=res+1;
                    }
                    else if(j==1 || j==8 || x == 1 || x == 8){
                        res=res+2;
                    }
                    else if(j == 2 || j == 7 || x == 2 || x == 7){
                        res=res+3;
                    }
                    else if(j == 3 || j == 6 || x == 3 || x == 6){
                        res=res+4;
                    }
                    else if(j == 4 || j == 5 || x == 4 || x == 5){
                        res=res+5;
                    }
                    else{
                    }
                }
                x++;
            }
        }
        cout << res << endl;
    }

}