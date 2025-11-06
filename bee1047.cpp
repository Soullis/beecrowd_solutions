#include <bits/stdc++.h>

using namespace std;

int main(){

    int hi, mini, hf, minf;

    cin >> hi >> mini >> hf >> minf;
    int ht, mint;

    if(hi < hf){
        if(mini < minf){
            ht = hf - hi;
            mint = minf - mini;
        }
        else{
            ht = hf - hi - 1;
            mint = minf + 60 - mini;
        }
    }
    else{
        if(mini < minf){
            ht = hf + 24 - hi;
            mint = minf - mini;
        }
        else{
            ht = hf + 24 - hi - 1;
            mint = minf + 60 - mini;
        }
    }
    if(mint == 60){
        mint = 0; ht++;
    }
    if(ht == 24) ht = 0;
    if(ht == 0 && mint == 0) ht = 24;

    cout << "O JOGO DUROU " << ht << " HORA(S) E " << mint << " MINUTO(S)\n";

    return 0;
}
