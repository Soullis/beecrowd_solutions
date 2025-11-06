#include <bits/stdc++.h>

using namespace std;

int main(){

    int i, f;
    cin >> i >> f;

    if(f <= 2) cout << "nova" << endl;
    else if(f <= 96 && f >= 3){
        if(f > i) cout << "crescente" << endl;
        else cout << "minguante" << endl;
    }
    else cout << "cheia" << endl;
    

    return 0;
}
