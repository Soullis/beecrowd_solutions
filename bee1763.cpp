#include <bits/stdc++.h>

using namespace std;

string elfo(string s){
    if(s == "brasil") return "Feliz Natal!";
    if(s == "alemanha") return "Frohliche Weihnachten!";
    if(s == "austria") return "Frohe Weihnacht!";
    if(s == "coreia") return "Chuk Sung Tan!";
    if(s == "espanha") return "Feliz Navidad!";
    if(s == "grecia") return "Kala Christougena!";
    if(s == "estados-unidos") return "Merry Christmas!";
    if(s == "inglaterra") return "Merry Christmas!";
    if(s == "australia") return "Merry Christmas!";
    if(s == "portugal") return "Feliz Natal!";
    if(s == "suecia") return "God Jul!";
    if(s == "turquia") return "Mutlu Noeller";
    if(s == "argentina") return "Feliz Navidad!";
    if(s == "chile") return "Feliz Navidad!";
    if(s == "mexico") return "Feliz Navidad!";
    if(s == "antardida") return "Merry Christmas!";
    if(s == "canada") return "Merry Christmas!";
    if(s == "irlanda") return "Nollaig Shona Dhuit!";
    if(s == "belgica") return "Zalig Kerstfeest!";
    if(s == "italia") return "Buon Natale!";
    if(s == "libia") return "Buon Natale!";
    if(s == "siria") return "Milad Mubarak!";
    if(s == "marrocos") return "Milad Mubarak!";
    if(s == "japao") return "Merii Kurisumasu!";
    return "--- NOT FOUND ---";
}

int main(){

    string s;

    while(cin >> s)
        cout << elfo(s) << endl;

    return 0;
}
