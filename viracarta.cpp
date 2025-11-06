#include <bits/stdc++.h>

using namespace std;

#define MAX 1000010

int main(){
    int n;
    int cima[MAX], baixo[MAX], aux[MAX];
    for(int i = 0; i < MAX; i++)
        aux[i] = 0;
    while(cin >> n && n){
        for(int i = 0; i < n; i++)
            cin >> cima[i];
        for(int i = 0; i < n; i++)
            cin >> baixo[i];
        cin >> n;
        int idxi, idxj;
        for(int i = 0; i < n; i++){
            cin >> idxi >> idxj;
            aux[idxi] ^= 1;
            aux[idxj] ^= 1;
        }

    }
}
