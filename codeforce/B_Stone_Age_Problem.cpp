    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long
    #define pb push_back
    #define ff first
    #define ss second
    #define all(x) (x).begin(), (x).end()

    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        ll n, q, p;
        cin >> n >> q;
        vector<ll> v(n);
        ll sum = 0,
        change_all = -1,big_val = 0;
        vector<pair<ll,ll>> mp(n,{0,0});
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            mp[i] = {v[i],0};
        }
        
        for (int i = 1; i <= q; i++)
        {
            cin >> p;
            if (p == 1)
            {
                ll ind,val;
                cin >> ind >> val;
                ind--;
                if(mp[ind].ss > change_all){
                    sum+= (val - mp[ind].ff);
                }
                else{
                    sum+= (val-big_val);
                }
                mp[ind] = {val,i};
                cout << sum << "\n";
            }
            else
            {
                ll val;
                cin >> val;
                big_val = val;
                sum = n * val;
                change_all = i;
                cout << sum << "\n";
            }
        }
        return 0;
    }