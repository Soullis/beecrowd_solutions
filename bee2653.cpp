#include <bits/stdc++.h>

using namespace std;

int main(){

    string joia;
    set<string> tt;

    while(cin >> joia){
        tt.emplace(joia);
    }
    cout << tt.size() << endl;

    return 0;
}
