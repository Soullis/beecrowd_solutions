#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    cin >> n;
    while(n){
        unsigned int test[n];
        for(int i = 0; i < n; i++) test[i] = 0;
        char prob;
        string isCorr;
        int time;
        int totaltime = 0;
        int totalsolved = 0;

        for(int i = 0; i < n; i++){
            cin >>  prob >> time >> isCorr;
            if(isCorr == "incorrect"){
                test[prob - 65] += 20;
            }
            else{
                totaltime += time + test[prob - 65];
                totalsolved++;
            }
        }

        cout << totalsolved << " " << totaltime << endl;

        cin >> n;
    }

    return 0;
}

