#include <bits/stdc++.h>

using namespace std;

int area(int a, int b, int c, int d){
    return (c - a)*(d - b);
}

int main(){
    int a, b, c, d;
    int ra, rb, rc, rd;
    int n;
    int cont = 0;
    while(cin >> n && n){
        cont++;
        ra = INT_MIN, rb = INT_MAX, rc = INT_MAX, rd = d;
        for(int i = 0; i < n; i++){
            cin >> a >> b >> c >> d;
            ra = max(ra, a);
            rb = min(rb, b);
            rc = min(rc, c);
            rd = max(rd, d);
        }
        cout << "Teste " << cont << endl;
        if(c <= a || d <= b) cout << "nenhum" << endl;
        else cout << a << " " << b << " " << c << " " << d << endl;
    }


    return 0;
}
