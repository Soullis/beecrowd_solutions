#include <bits/stdc++.h>

using namespace std;



int main(){

    set<string> pSIM;
    set<string> pNAO;
    pair<string, string> amigo = {"", "NAO"};

    string nome;
    string r;


    while(cin >> nome >> r && nome != "FIM"){

        if(r == "YES"){
            pSIM.emplace(nome);
        }
        else{
            pNAO.emplace(nome);
        }

        if(amigo.second == "NO"){
            if(r == "YES"){
                amigo = {nome, r};
            }
            else{
                if(amigo.first.size() < nome.size()){
                    amigo = {nome, r};
                }
            }
        }
        else{
            if(r == "YES" && amigo.first.size() < nome.size()){
                amigo = {nome, r};
            }
        }

    }

    for(string p : pSIM) cout << p << endl;
    for(string p : pNAO) cout << p << endl;

    cout << "\nAmigo do Habay:\n" << amigo.first << endl;

    return 0;
}
