#include <bits/stdc++.h>
using namespace std;

int main(){

    int n; cin >> n;
    float q;
    char a;
    float t;
    float ts[3] = {0, 0, 0};
        for(int i = 0; i < n; i++){
            cin >> q >> a;
            if(a == 'C'){
                ts[0] += q;
            }
            else if(a == 'R'){
                ts[1] += q;
            }
            else ts[2] += q;

            t += q;

            
            
        }
        cout << "Total: " << t << " cobaias" << endl;
        cout << "Total de coelhos: " << ts[0] << endl;
        cout << "Total de ratos: " << ts[1] << endl;
        cout << "Total de sapos: " << ts[2] << endl;
        cout << "Percentual de coelhos: " << fixed << setprecision(2) << ts[0]/t * 100 << " %" << endl;
        cout << "Percentual de ratos: " << fixed << setprecision(2) << ts[1]/t * 100<<  " %" << endl;
        cout << "Percentual de sapos: " << fixed << setprecision(2) << ts[2]/t * 100<<  " %" << endl;
    return 0;
}
