#include <bits/stdc++.h>
 
using namespace std;

int main() {
 
    double t;
    cin >> t;

    int c = (int)(t * 100);

    cout << "NOTAS:\n";
    cout << c/10000 << " nota(s) de R$ 100.00\n";
    c %= 10000;
    cout << c/5000 << " nota(s) de R$ 50.00\n";
    c %= 5000;
    cout << c/2000 << " nota(s) de R$ 20.00\n";
    c %= 2000;
    cout << c/1000 << " nota(s) de R$ 10.00\n";
    c %= 1000;
    cout << c/500 << " nota(s) de R$ 5.00\n";
    c %= 500;
    cout << c/200 << " nota(s) de R$ 2.00\n";
    c %= 200;
    cout << "MOEDAS:\n";
    cout << c/100 << " moeda(s) de R$ 1.00\n";
    c %= 100;
    cout << c/50 << " moeda(s) de R$ 0.50\n";
    c %= 50;
    cout << c/25 << " moeda(s) de R$ 0.25\n";
    c %= 25;
    cout << c/10 << " moeda(s) de R$ 0.10\n";
    c %= 10;
    cout << c/5 << " moeda(s) de R$ 0.05\n";
    c %= 5;
    cout << c << " moeda(s) de R$ 0.01\n"; 
 
    return 0;
}