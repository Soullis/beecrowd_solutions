#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, d, temp;
    while(cin >> n >> d && (n || d)){

        int f[n];
        for(int i = 0; i < n; i++) f[i] = 1;

        for(int i = 0; i < d; i++){
            for(int i = 0; i < n; i++){
                cin >> temp;
                f[i] &= temp;
            }
        }

        bool flag = false;

        for(int i = 0; i < n; i++){
            if(f[i] == 1 && !flag){
                cout << "yes" << endl;
                flag = true;
            }
        }
        if(!flag) cout << "no" << endl;

    }

    return 0;
}
