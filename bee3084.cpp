#include <bits/stdc++.h>

using namespace std;

int main(){

    int h, m;
    while(cin >> h >> m){
        h /= 30; if(h < 10) cout << "0";
        cout << h << ":";
        m /= 6; if(m < 10) cout << "0";
        cout << m << endl;
    }

    return 0;
}
