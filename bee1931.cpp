#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, m; cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i = 0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    const int inf = 1e9;
    vector<vector<int>> dist(n+1, vector<int>(2, inf));
    priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>, greater<>> pq;
    dist[1][0] = 0;
    pq.push({0, 1, 0});

    while(!pq.empty()){
        auto [d, u, p] = pq.top(); pq.pop();
        if(d > dist[u][p]) continue;
        for(auto [v, w] : adj[u]){
            int np = 1 - p;
            if(dist[v][np] > d + w){
                dist[v][np] = d + w;
                pq.push({dist[v][np], v, np});
            }
        }
    }

    if(dist[n][0] == inf) cout << -1 << "\n";
    else cout << dist[n][0] << "\n";

    return 0;
}
