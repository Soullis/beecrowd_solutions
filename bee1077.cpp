#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    string op;
    stack<vector<int>> operandos;
    stack<int> operadores;
    map<char, int> prior = {
        {'|', 1},
        {'.', 2},
        {'>', 3},
        {'<', 3},
        {'=', 3},
        {'#', 3},
        {'+', 4},
        {'-', 4},
        {'*', 5},
        {'/', 5},
        {'^', 6}
    };

    while(cin >> op){

        char last;
        string r = "";

        for(char c : op){

            if(c == '('){
                operandos.emplace();
            }
            if((c >= 'a' && c <= 'z'))

        }



    }

    return 0;
}
