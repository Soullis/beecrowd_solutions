#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    int cesar; 
    string s;
    for(int i = 0; i < n; i++){
        cin >> s;
        cin >> cesar;
        for(char c : s){
            if(c - cesar >= 'A') cout << (char)(c - cesar);
            else cout << (char)('Z' - cesar  + c - 'A' + 1);
        }
        cout << endl;
    }

    return 0;
}
