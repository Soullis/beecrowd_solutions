#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin >> s;

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == '1' && s[i + 1] == '3'){
            cout << s << " es de Mala Suerte\n";
            return 0;
        }
    }

    cout << s << " NO es de Mala Suerte\n";

    return 0;
}
