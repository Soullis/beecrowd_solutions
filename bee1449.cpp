#include <bits/stdc++.h>

using namespace std;

int main(){

    int t, n, m;
    string h, s;
    cin >> t;

    map<string, string> dict;
    bool flag;
    string line;

    for(int i = 0; i < t; i++){
        cin >> m >> n;
        getchar();
        for(int j = 0; j < m; j++){
            getline(cin, s);
            getline(cin, h);
            dict[s] = h;
        }
        for(int k = 0; k < n; k++){
            getline(cin, line);
            for(const auto &[key, value] : dict){
                flag = true;
                while(flag){
                    auto it = line.find(key);
                    if(it != string::npos){
                        line.replace(it, key.size(), value);
                    }
                    else flag = false;
                }
            }
            cout << line << endl;
        }
        cout << endl;
    }

    return 0;
}
