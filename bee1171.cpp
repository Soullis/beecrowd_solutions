#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> x(2000);
    fill(x.begin(), x.end(), 0);
    int temp, n; cin >> n;

    for(int i = 0; i < n; i++){
        cin >> temp;
        x[temp-1]++;
    }

    for(int i = 0; i < 2000; i++){
        if(x[i] != 0)
            cout << i + 1 << " aparece " << x[i] << " vez(es)\n";
    }

    return 0;
}
