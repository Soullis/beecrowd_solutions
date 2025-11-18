#include <bits/stdc++.h>

using namespace std;

#define LIGHT 300000000

int main(){

    long double v; cin >> v;

    long double laml = (sqrt((LIGHT - v) / (LIGHT + v)) - 1)*0.0000007 + 0.0000007;

    if(laml < 0.000000400 || laml >= 0.000000750) cout << "invisivel";
    else if(laml < 0.000000425) cout << "violeta";
    else if(laml < 0.000000445) cout << "anil";
    else if(laml < 0.000000500) cout << "azul";
    else if(laml < 0.000000575) cout << "verde";
    else if(laml < 0.000000585) cout << "amarelo";
    else if(laml < 0.000000620) cout << "laranja";
    else if(laml < 0.000000750) cout << "vermelho";

    cout << endl;

    return 0;
}
