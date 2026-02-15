    #include <bits/stdc++.h>
    using namespace std;
    
    #define ll long long
    #define pb push_back
    #define ff first
    #define ss second
    #define all(x) (x).begin(), (x).end()
    
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
    
        int t;
        cin >> t;
        while (t--) {
            int n;
            cin >> n;
            vector<int> perm(n);
            for (int i = 0; i < n; i++) {
                cin >> perm[i];
            }
            vector<int> arr(n);
            for(int i = 0; i < n; i++)cin >> arr[i];
            set<ll> st;
            vector<int> res,ans;
            unordered_map<int,int> mp;
            int l = 0;
            bool flag = true;
            while(l < n){
                int val = arr[l];
                if(mp[arr[l]] == 1){
                    flag = false;
                    break;
                }
                else{
                    mp[arr[l]] = 1;
                    while(l < n && arr[l] == val){
                        l++;
                    }
                }
            }
            if(!flag){
                cout << "NO" << "\n";
                continue;
            }
            for(int i = 0 ; i < n; i++){
                if(!st.count(arr[i])){
                    res.push_back(arr[i]);
                    st.insert(arr[i]);
                }
            }
            for(int i = 0 ; i < n ;i++){
                if(st.count(perm[i]))ans.push_back(perm[i]);
            }
            if(ans == res){
                cout << "YES" << "\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    
        return 0;
    }