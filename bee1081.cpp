#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> adj;
vector<bool> visited;

void dfs(int u, int depth, bool &hasPath) {
    visited[u] = true;
    for (int v : adj[u]) {
        for (int i = 0; i < 2 * depth; i++) cout << " ";
        cout << u << "-" << v;
        if (!visited[v]) {
            cout << " pathR(G," << v << ")\n";
            hasPath = true;
            dfs(v, depth + 1, hasPath);
        } else {
            cout << "\n";
            hasPath = true;
        }
    }
}

int main() {

    int t;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        cin >> n >> m;
        adj.assign(n, {});
        visited.assign(n, false);

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        for (int i = 0; i < n; i++)
            sort(adj[i].begin(), adj[i].end());

        cout << "Caso " << c << ":\n";
        bool first = true;
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                bool hasPath = false;
                dfs(i, 1, hasPath);
                if (hasPath) cout << "\n";
            }
        }
    }
    return 0;
}
