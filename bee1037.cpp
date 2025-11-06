#include <bits/stdc++.h>

using namespace std;

int main(){

    double f;
    cin >> f;

    if(f < 0.00000000 || f > 100.00000000){
        cout << "Fora de intervalo" << endl;
        return 0;
    }

    cout << "Intervalo ";

    if(f <= 25.0000000)
        cout << "[0,25]";
    else if(f <= 50.0000000)
        cout << "(25,50]";
    else if(f <= 75.0000000)
        cout << "(50,75]";
    else
        cout << "(75,100]";


    cout << endl;
    return 0;
}
