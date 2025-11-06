#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, menor, idx; cin >> n >> m;
    vector<pair<int, int>> c(n);
    int v;

    for(int i = 0; i < n; i++){
        cin >> c[i].second;
        c[i].first = 0;
    }
    for(int i = 0; i < m; i++){
        cin >> v;
        idx = 0;
        for(int j = 0; j < n; j++){
            if(c[j].first < c[idx].first) idx = j;
        }
        c[idx].first += v*c[idx].second;
    }
    int maior = INT_MIN;
    for(int i = 0; i < n; i++){
        maior = max(maior, c[i].first);
    }

    cout << maior << endl;

    return 0;
}
