#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, temp; cin >> n;
    char a, idx;

    while(n){
        
        for(int i = 0; i < n; i++){
            a = 0;
            for(int j = 0; j < 5; j++){
                cin >> temp;
                if(temp <= 127){
                    a++;
                    idx = j;
                }
            }
            if(a == 1) cout << static_cast<char>('A' + idx) << endl;
            else cout << "*" << endl;
        }


        cin >> n;
    }

    return 0;
}
