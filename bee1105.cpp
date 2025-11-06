#include <bits/stdc++.h>

using namespace std;

#define MAX 21

int main(){

    int B, N, bancos[MAX];
    int a, b, c;
    bool flag;

    while(cin >> B >> N &&(B || N)){
        flag = true;
        for(int i = 0; i < B; i++) cin >> bancos[i];

        for(int i = 0; i < N; i++){
            cin >> a >> b >> c;
            bancos[a - 1] -= c;
            bancos[b - 1] += c;
        }

        for(int i = 0; i < B; i++){
            if(bancos[i] < 0){
                cout << "N\n";
                flag = false;
                break;
            }
        }
        if(flag) cout << "S\n";

    }

    return 0;
}
