#include <bits/stdc++.h>

using namespace std;

int main(){

    int k;
    cin >> k;

    while(k){

        int px, py, tx, ty;
        cin >> px >> py;

        for(int i = 0; i < k; i++){
            cin >> tx >> ty;
            if(px == tx || py == ty) cout << "divisa";
            else{
                if(ty > py) cout << "N";
                else cout << "S";
                if(tx > px) cout << "E";
                else cout << "O";
            }
            cout << endl;
        }

        cin >> k;
    }

    return 0;
}

