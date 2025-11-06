#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, sam, counter; cin >> n;
    vector<int> s;
    string c;

    for(int i = 0; i < n; i++){
        cin >> sam;
        s = vector<int> (sam);
        counter = 0;

        for(int j = 0; j < sam; j++)
            cin >> s[j];
        cin >> c;

        for(int j = 0; j < sam; j++){
            if((s[j] <= 2) && (c[j] == 'S')) counter++;
            if((s[j] > 2) && (c[j] == 'J')) counter++;
        }

        cout << counter << endl;

    }

    return 0;
}
