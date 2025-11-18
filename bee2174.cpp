#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    set<string> pokemons;
    string temp;

    for(int i = 0; i < n; i++){

        cin >> temp;

        pokemons.emplace(temp);

    }

    cout << "Falta(m) " << 151 - pokemons.size() << " pokemon(s).\n";

    return 0;
}
