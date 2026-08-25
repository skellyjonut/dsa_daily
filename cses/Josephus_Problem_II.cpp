#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;


#define ll long long
#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

const int M = 1e9+7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin >> n >> k;
    pbds pb;
    for(int i = 1; i <= n; i++)pb.insert(i);
    int pos = 0;
    while(!pb.empty()){
        pos = (pos+k)%pb.size();
        auto it = pb.find_by_order(pos);
        cout << *it << " ";
        pb.erase(it);
    }

    return 0;
}