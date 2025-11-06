#include <bits/stdc++.h>

using namespace std;

void mostrar(vector<int> x){
    for(int i = 0; i < x.size(); i++){
        cout << x[i] << " ";
    }
    cout << endl;
}


int main(){

    int nc;
    cin >> nc;

    int n, k;

    for(int i = 0; i < nc; i++){

        cin >> n >> k;
        vector<int> m(n);
        int j = 0;
        fill(m.begin(), m.end(), j);
        int r = n;

        int idx = 1;

        while(r != 1){
            for(int l = 1; l < k; l++){
                if(m[idx - 1] == -1){
                    l--;
                }
                if(idx >= n) idx = 0;
                idx++;
            }
            m[idx - 1] = -1;
            r--;
            cout << idx << ": ";
            mostrar(m);
        }

        cout << "Case " << i + 1 << ": " << idx + 1 << endl;
    }

    return 0;
}
