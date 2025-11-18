#include <bits/stdc++.h>

using namespace std;


int main(){

    int counter = 1;
    int n, tempn, tempc, tn, tc, lastn, lastc;
    bool isfirst = true;

    while(cin >> n && n){

        if(!isfirst) cout << endl;
        else isfirst = false;

        vector<pair<int, int>> casas(n);
        tn = 0, tc = 0;

        for(int i = 0; i < n; i++){
            cin >> tempn >> tempc;
            casas[i] = {tempc/tempn, tempn};
            tn += tempn;
            tc += tempc;
        }

        sort(casas.begin(), casas.end());

        cout << "Cidade# " << counter << ":\n";
        
        lastc = casas[0].first;
        lastn = casas[0].second;

        for(int i = 1; i < n; i++){
            if(casas[i].first == lastc){
                casas[i].second += lastn;
            }
            else{
                cout << casas[i - 1].second << "-" << casas[i - 1].first << " ";
            }
            lastc = casas[i].first;
            lastn = casas[i].second;
        }
        cout << casas[n - 1].second << "-" << casas[n - 1].first << " ";

        cout << "\nConsumo medio: " << fixed << setprecision(2) << floor(100 * (float)tc/(float)tn) / 100<< " m3." << endl;
    
        counter++;
    }

    return 0;
}
