#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    int d, in, b, qi, qt, t, tempidx, tempq;
    for(int i = 0; i < n; i++){
        
        cin >> d >> in >> b;
        vector<int> preco(in);
        t = INT_MIN;
        for(int j = 0; j < in; j++) cin >> preco[j];
        for(int j = 0; j < b; j++){
            cin >> qi;
            qt = 0;
            for(int k = 0; k < qi; k++){
                cin >> tempidx >> tempq;
                qt += preco[tempidx] * tempq;
            }
            t = max(t, d/qt);
        }
        cout << t << endl;
    }

    return 0;
}
