#include <bits/stdc++.h>

using namespace std;

int main(){

    
    int n, counter; cin >> n;
    string s;
    
    for(int i = 0; i < n; i++){
        stack<char> dim;
        dim.push('-');
        counter = 0;
        cin >> s;
        for(char c : s){
            if(c == '>' && dim.top() == '<'){
                dim.pop();
                counter++;
            }
            else if(c == '<' || c == '>') dim.push(c);
        }
        cout << counter << endl;
    }

    return 0;
}
