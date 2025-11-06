#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> comp;

void dfs(int u) {
    visited[u] = true;
    comp.push_back(u);
    for (int v : adj[u])
        if (!visited[v])
            dfs(v);
}

int main() {
    int t;
    cin >> t;
    for (int c = 1; c <= t; c++) {
        int n, m;
        cin >> n >> m;
        adj.assign(n, {});
        visited.assign(n, false);

        for (int i = 0; i < m; i++) {
            char a, b;
            cin >> a >> b;
            int u = a - 'a';
            int v = b - 'a';
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for (int i = 0; i < n; i++)
            sort(adj[i].begin(), adj[i].end());

        cout << "Case #" << c << ":\n";
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                comp.clear();
                dfs(i);
                sort(comp.begin(), comp.end());
                for (int v : comp)
                    cout << (char)(v + 'a') << ",";
                cout << "\n";
                count++;
            }
        }

        cout << count << " connected components\n\n";
    }
    return 0;
}
