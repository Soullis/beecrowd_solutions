#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    while(getline(cin, s)){
        getline(cin, t);
        cout << "if(s == \"" << s << "\") return \"" << t << "\";\n";
    }
}
