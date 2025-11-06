#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string a, b;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a >> b;

        if(b.length() > a.length()) 
            cout << "nao ";
        else{
            a = a.substr(a.length() - b.length());
            if(a != b)
                cout << "nao ";
        }
        cout << "encaixa" << endl;
    }

    return 0;
}