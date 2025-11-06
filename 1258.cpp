#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >>n;
    vector<map<string, pair<char, string>>> c;
    string nome;

    while(n){
        getchar();

        c = vector<map<string, pair<char, string>>> (n);

        for(int i = 0; i < n; i++){
            getline(cin, nome);
            cin >> 
        }

        sort(c.begin(), c.end());

        for(int i = 0; i < n; i++){
            cout << c[i].first << " " << c[i].second << endl;
        }

        cout << endl;

        cin >> n;
    }

    return 0;
}
