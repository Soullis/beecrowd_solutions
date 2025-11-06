#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;

    double am;

    for(int i = 0; i < n; i++){
        cin >> am;

        cout << (int)((log10(am)/log10(2.0)) + 1) << " dias\n";
    }

    return 0;
}
