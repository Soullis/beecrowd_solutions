#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<string, int>& a, const pair<string, int>& b){
    if(a.first.size() == b.first.size()) return a.second < b.second;
    return a.first.size() > b.first.size();
}

int main(){

    int n; cin >> n; getchar();

    for(int i = 0; i < n; i++){

        vector<pair<string, int>> ss;
        string s, f = "";
        getline(cin, s);
        int idx = 0;
        for(char c : s){
            if(c == ' ') {
                ss.emplace_back(f, idx);
                f = "";
                idx++;
            }
            else f = f + c;
        }

        ss.emplace_back(f, idx);

        sort(ss.begin(), ss.end(), comp);

        for(int i = 0; i < ss.size() - 1; i++){
            cout << ss[i].first << " ";
        } cout << ss[ss.size() - 1].first << endl;

    }

    return 0;
}
