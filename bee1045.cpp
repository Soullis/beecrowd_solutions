#include <bits/stdc++.h>

using namespace std;


int main(){

    vector<double> t(3);
    cin >> t[0] >> t[1] >> t[2];

    double a, b, c;

    sort(t.begin(), t.end(), greater());

    a = t[0];
    b = t[1];
    c = t[2];
    
    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }

    if(pow(a, 2) == pow(b, 2) + pow(c, 2))
        cout << "TRIANGULO RETANGULO" << endl;
    if(pow(a, 2) > pow(b, 2) + pow(c, 2))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if(pow(a, 2) < pow(b, 2) + pow(c, 2))
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(a == b && b == c)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if(a == b || b == c || a == c)
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
