#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> color;
vector<int> component_nodes;

// Returns true if the component is bipartite
bool is_bipartite(int u, int c) {
    color[u] = c;
    component_nodes.push_back(u);
    bool bipartite = true;

    for (int v : adj[u]) {
        if (color[v] == -1) {
            // If the next node can't be bipartite, the whole component isn't
            if (!is_bipartite(v, 1 - c)) {
                bipartite = false;
            }
        } else if (color[v] == c) {
            // Found an edge between same colors (odd cycle!)
            bipartite = false;
        }
    }
    return bipartite;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    adj.resize(n + 1);
    color.assign(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    long long max_beautiful = 0;

    for (int i = 1; i <= n; i++) {
        if (color[i] == -1) {
            component_nodes.clear();
            if (is_bipartite(i, 0)) {
                // If the whole component is bipartite, all nodes in it are beautiful
                max_beautiful += component_nodes.size();
            }
        }
    }

    cout << max_beautiful << endl;

    return 0;
}