#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    getchar();
    string s, a;
    char last;
    for(int i = 0; i < n; i++){
        getline(cin, s);
        a = "";
        last = ' ';
        for(char c : s){
            if(last == ' ' && c != ' ')
                a += c;
            last = c;
        }
        cout << a << endl;
    }

    return 0;
}
