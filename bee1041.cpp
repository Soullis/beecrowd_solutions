#include <bits/stdc++.h>

using namespace std;

int main(){

    double x, y;
    cin >> x >> y;

    if(x == 0.0000000 && y == 0.00000000)
        cout << "Origem";
    else if(x == 0.000000000)
        cout << "Eixo Y";
    else if(y == 0.000000000)
        cout << "Eixo X";
    else{
        cout << "Q";
        if(x > 0.000000000 && y > 0.000000000)
            cout << "1";
        else if(x < 0.000000000 && y > 0.000000000)
            cout << "2";
        else if(x < 0.000000000 && y < 0.000000000)
            cout << "3";
        else
            cout << "4";
    }

    cout << endl;


    return 0;
}
