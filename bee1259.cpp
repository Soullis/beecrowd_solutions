#include <bits/stdc++.h>

using namespace std;

void show(vector<int> &g){
    for(int i = 0; i < g.size(); i++){
        cout << g[i] << endl;
    }
}

int main(){

    int n;
    vector<int> o, e;

    cin >> n;
    int h;

    for(int i = 0; i < n; i++){
        cin >> h;
        if(h%2 == 0) e.emplace_back(h);
        else o.emplace_back(h);
    }

    sort(e.begin(), e.end());
    sort(o.begin(), o.end(), greater());

    show(e);
    show(o);

    return 0;
}

