#include <bits/stdc++.h>

using namespace std;

void clearStack(std::stack<char>& s) {
    while (!s.empty()) {
        s.pop();
    }
}

int main(){

    string ex;
    stack<char> p;
    bool flag = true;

    while(cin >> ex){
        for(char c : ex){
            if(c ==  '('){
                p.push('(');
            }
            else if(c == ')'){
                if(!p.empty() && p.top() == '('){
                    p.pop();
                }
                else{
                    flag = false;
                }
            }
        }
        if(!p.empty()){
            flag = false;
        }
        if(flag){
            cout << "correct" << endl;
        }
        else{
            cout << "incorrect" << endl;
        }
        flag = true;
        clearStack(p);
    }

    return 0;
}
