#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    int menor = INT_MAX, temp, idx;

    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp < menor){
            menor = temp;
            idx = i;
        }
    }

    cout << idx + 1 << endl;

    return 0;
}
