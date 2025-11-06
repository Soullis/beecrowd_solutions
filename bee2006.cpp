#include <bits/stdc++.h>

using namespace std;

int main(){

    int t; cin >> t;
    int temp;
    int q =0;
    for(int i = 0; i < 5; i++){
        cin >> temp;
        if(temp == t) q++;
    }
    cout << q << endl;


    return 0;
}
