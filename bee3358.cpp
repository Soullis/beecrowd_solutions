#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    string name;

    for(int i = 0; i < n; i++){

        cin >> name;

        int count = 0;

        cout << name << " ";

        for(char c : name){
            if(c != 'a' && c != 'A' && c != 'e' && c != 'E' && c != 'i' && c != 'I' && c != 'o' && c != 'O' && c != 'u' && c != 'U'){
                count++;
            }
            else count = 0;
            if(count >= 3){
                cout << "nao ";
                break;
            } 
        }

        cout << "eh facil\n";

    }

    return 0;
}
