#include<bits/stdc++.h>

using namespace std;

int main(){

    char tempa, tempb;
    int r, g, b;
    int c; cin >> c;
    vector<int> gols(3);
    for(int i = 0; i < c; i++){
        r = 0, g = 0, b = 0;
        int p; cin >> p;
        for(int j = 0; j < p; j++){
            cin >> tempa >> tempb;
            if(tempa == 'R' && tempb == 'G') r+=2;
            if(tempa == 'G' && tempb == 'B') g+=2;
            if(tempa == 'B' && tempb == 'R') b+=2;
            if(tempa == 'G' && tempb == 'R') g++;
            if(tempa == 'B' && tempb == 'G') b++;
            if(tempa == 'R' && tempb == 'B') r++;
        }
        gols = {r, g, b};
        sort(gols.begin(), gols.end());
        if(gols[0] == gols[1] && gols[0] == gols[2]) cout << "trempate\n";
        else if(gols[1] == gols[2]) cout << "empate\n";
        else if(gols[2] == r) cout << "red\n";
        else if(gols[2] == g) cout << "green\n";
        else cout << "blue\n";
    }


    return 0;
}
