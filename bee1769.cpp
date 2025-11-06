#include <bits/stdc++.h>

using namespace std;

int main(){

    string cpf;
    int b1, b2;

    while(cin >> cpf){

        b1 = ((cpf[0] - 48) + 2*(cpf[1] - 48) + 3*(cpf[2] - 48) + 4*(cpf[4] - 48) + 5*(cpf[5] - 48) + 6*(cpf[6] - 48) + 7*(cpf[8] - 48) + 8*(cpf[9] - 48) + 9*(cpf[10] - 48)) % 11;
        b2 = (9*(cpf[0] - 48) + 8*(cpf[1] - 48) + 7*(cpf[2] - 48) + 6*(cpf[4] - 48) + 5*(cpf[5] - 48) + 4*(cpf[6] - 48) + 3*(cpf[8] - 48) + 2*(cpf[9] - 48) + (cpf[10] - 48)) % 11;
 
        if(b1 == 10) b1 = 0;
        if(b2 == 10) b2 = 0;

        cout << "CPF ";

        if((b1 != cpf[12] - 48) || (b2 != cpf[13] - 48)) cout << "in";

        cout << "valido" << endl;
    }

    return 0;
}
