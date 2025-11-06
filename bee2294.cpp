#include <bits/stdc++.h>
using namespace std;

int bfs(vector<vector<int>>& grid, int n, int m, int sx, int sy){
    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int,int>> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;
    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};
    while(!q.empty()){
        auto [x, y] = q.front(); q.pop();
        for(int k = 0; k < 4; k++){
            int nx = x + dx[k], ny = y + dy[k];
            if(nx < 0 || ny < 0 || nx >= n || ny >= m) continue;
            if(grid[nx][ny] == 2 || dist[nx][ny] != -1) continue;
            dist[nx][ny] = dist[x][y] + 1;
            if(grid[nx][ny] == 0) return dist[nx][ny];
            q.push({nx, ny});
        }
    }
    return -1;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    int sx, sy;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
            if(grid[i][j] == 3){ sx = i; sy = j; }
        }
    cout << bfs(grid, n, m, sx, sy) << "\n";
}
