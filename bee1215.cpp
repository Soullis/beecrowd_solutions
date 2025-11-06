#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, w="";
    set<string> dic;

    while(cin >> s){
        for(char c : s){
            if(c >= 'a' && c <= 'z'){
                w = w + c;
            }
            else if(c >= 'A' && c <= 'Z'){
                c += 32;
                w = w + c; 
            }
            else{
                if(w != ""){
                    dic.emplace(w);
                    w = "";
                }
            }
        }
        if(w != ""){
            dic.emplace(w);
            w = "";
        }
    }


    for(string ss : dic){
        cout << ss << endl;
    }

    return 0;
}
