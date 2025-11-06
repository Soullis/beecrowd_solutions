#include <bits/stdc++.h>

using namespace std;

int main(){

    string k, s;
    int iteration = 1;

    cin >> k;

    while(k != "0"){

        if(iteration != 1) cout << endl;

        cin >> s;

        size_t it = s.find(k);

        cout << "Instancia " << iteration << endl;
        if(it == string::npos) cout << "falsa" << endl;
        else cout << "verdadeira" << endl;

        cin >> k;
        iteration++;
    }

}
