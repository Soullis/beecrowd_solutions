#include <bits/stdc++.h>

using namespace std;


int main(){

    long int r1, x1, y1, r2, x2, y2;
    double dist;

    while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){

        dist = sqrt(pow(x1 -x2, 2) + pow(y1 - y2, 2));

        if(dist + r2 <= r1) cout << "RICO" << endl;
        else cout << "MORTO" << endl;
    }

    return 0;
}

