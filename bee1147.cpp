#include <bits/stdc++.h>

using namespace std;

int main(){

    string k, pawn;
    int counter = 1;
    vector<string> pos;
    set<string> pospos;

    cin >> k;

    while(k != "0"){
        pos.clear();
        pospos.clear();

        if((k[0] + 2 <= '8') && (k[1] + 1 <= 'h'))
            pos.push_back(string(1, k[0] + 2) + (char)(k[1] + 1));
            

        if((k[0] + 1 <= '8') && (k[1] + 2 <= 'h'))
            pos.push_back(string(1, k[0] + 1) + (char)(k[1] + 2));
            

        if((k[0] - 1 >= '1') && (k[1] + 2 <= 'h'))
            pos.push_back(string(1, k[0] - 1) + (char)(k[1] + 2));
            

        if((k[0] - 2 >= '1') && (k[1] + 1 <= 'h'))
            pos.push_back(string(1, k[0] - 2) + (char)(k[1] + 1));
            

        if((k[0] - 2 >= '1') && (k[1] - 1 >= 'a'))
            pos.push_back(string(1, k[0] - 2) + (char)(k[1] - 1));
            

        if((k[0] - 1 >= '1') && (k[1] - 2 >= 'a'))
            pos.push_back(string(1, k[0] - 1) + (char)(k[1] - 2));
            

        if((k[0] + 1 <= '8') && (k[1] - 2 >= 'a'))
            pos.push_back(string(1, k[0] + 1) + (char)(k[1] - 2));
            

        if((k[0] + 2 <= '8') && (k[1] - 1 >= 'a'))
            pos.push_back(string(1, k[0] + 2) + (char)(k[1] - 1));
            

        for(int i = 0; i < 8; i++){
            cin >> pawn;

            for(string p : pos){
                if((pawn[0] - 1 == p[0]) && ((pawn[1] - 1 == p[1]) || (pawn[1] + 1 == p[1]))){
                    pospos.emplace(p);
                }
            }
        }
        cout << "Caso de Teste #" << counter << ": " << pos.size() - pospos.size() << " movimento(s).\n";

        counter++;
        cin >> k;

    }

    return 0;
}
