#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> state;
bool found_cycle;

void dfs(int u) {
    if (found_cycle) return;
    state[u] = 1;
    for (int v : adj[u]) {
        if (state[v] == 0) {
            dfs(v);
            if (found_cycle) return;
        } else if (state[v] == 1) {
            found_cycle = true;
            return;
        }
    }
    state[u] = 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        adj.assign(N+1, vector<int>());
        state.assign(N+1, 0);
        found_cycle = false;

        for (int i = 0; i < M; i++) {
            int A, B;
            cin >> A >> B;
            adj[A].push_back(B);
        }

        for (int u = 1; u <= N; u++) {
            if (state[u] == 0) {
                dfs(u);
                if (found_cycle) break;
            }
        }

        if (found_cycle) cout << "SIM\n";
        else cout << "NAO\n";
    }
    return 0;
}