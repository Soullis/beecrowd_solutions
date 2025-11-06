#include <bits/stdc++.h>

using namespace std;

int calls;

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    calls+=2;
    return fib(n - 1) + fib(n - 2);
}

int main(){

    int n, a; cin >> n;

    for(int i = 0; i < n; i++){
        calls = 0;
        cin >> a;
        int g = fib(a);
        cout << "fib(" << a << ") = " << calls << " calls = " << g << endl;

    }

    return 0;
}
