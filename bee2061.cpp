#include <bits/stdc++.h>

using namespace std;

int main(){

    int q, n;
    string temp;
    cin >> q >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp == "fechou") q++;
        else q--;
    }

    cout << q << endl;

    return 0;
}
