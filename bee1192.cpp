#include <bits/stdc++.h>

using namespace std;



int main(){

    int n;
    cin >> n;

    string w;

    for(int i = 0; i < n; i++){

        cin >> w;

        if(w[0] == w[2]) cout << (w[0] - 48) * (w[2] - 48);
        else if(w[1] >= 'a' && w[1] <= 'z') cout << (w[0] - 48) + (w[2] - 48);
        else cout << (w[2] - 48) - (w[0] - 48);

        cout << endl;
    }

    return 0;
}
