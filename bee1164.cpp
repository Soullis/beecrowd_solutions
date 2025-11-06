#include <bits/stdc++.h>

using namespace std;

long int sumofdiv(long int n){
    long int x = 0;
    for(long int i = 1; i < n/2 + 1; i++){
        if(n % i == 0) x += i;
    }
    return x;
}


int main(){

    int n;
    cin >> n;
    int a;

    for(int i = 0; i < n; i++){
        cin >> a;
        cout << a;
        if(a != sumofdiv(a)) cout << " nao";
        cout << " eh perfeito" << endl;
    }

    return 0;
}

