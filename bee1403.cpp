#include <bits/stdc++.h>

using namespace std;


int main(){

    int n, m;
    cin >> n >> m;
    vector<int> r;
    vector<pair<int, int>> p;
    vector<int> s;
    int h, idx = 0;

    while(n || m){

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> h;
                auto it = find(r.begin(), r.end(), h);
                if(it == r.end()){
                    r.emplace_back(h);
                    p.emplace_back(1, h);
                }
                else
                    p[distance(r.begin(), it)].first++;
            }    
        }
        sort(p.begin(), p.end(), greater());
        h = p[idx].first;
        while(p[idx].first == h){
            idx++;
        }
        h = p[idx].first;
        while(p[idx].first == h){
            s.emplace_back(p[idx].second);
            idx++;
        }
        sort(s.begin(), s.end());
        for(int k = 0; k < s.size(); k++)
            cout << s[k] << " ";
        cout << endl;
        cin >> n >> m;
        r.clear();
        p.clear();
        s.clear();
        idx = 0;
    }

    return 0;
}
