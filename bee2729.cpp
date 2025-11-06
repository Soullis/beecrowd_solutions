#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<string> list;
    string s;
    string h;

    for(int i = 0; i < n; i++){
        while(getline(cin, s, ' ')){
            list.push_back(s);
        }

        sort(list.begin(), list.end());
        auto lu = unique(list.begin(), list.end());
        list.erase(lu, list.end());

        for(string g : list)
            cout << g;
        cout << endl;
    }

    return 0;
}
