#include <bits/stdc++.h>

using namespace std;

queue<bool> baseBinaria(long int n){
    queue<bool> q;
    for(int i = 0; i < 32; i++){
        if(n != 0){
            q.push(n%2);
            n /= 2;
        }
        else q.push(0);
    }
    return q;
}

long int baseDecimal(queue<bool> q){
    long int n = 0;
    long int p = 1;
    while(q.size() > 0){
        n += q.front() * p;
        q.pop();
        p *= 2;
    }
    return n;
}

void mostrar(queue<bool> b){
    while(b.size() > 0){
        cout << b.front();
        b.pop();
    }
    cout << endl;
}

int main(){

    long int aa, bb;

    while(cin >> aa >> bb){
        queue<bool> a = baseBinaria(aa), b = baseBinaria(bb), r;
    
        for(int i = 0; i < 32; i++){
            r.push(((!a.front() && b.front()) || (a.front() && !b.front())));
            a.pop();
            b.pop();
        }
    
        cout << baseDecimal(r) << endl; 
    }


    return 0;
}
