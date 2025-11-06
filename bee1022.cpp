#include <bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c, d, fc, fb, n; cin >> n;
    char temp, op;

    for(int i = 0; i < n; i++){
        cin >> a >> temp >> b >> op >> c >> temp >> d;

        switch(op){
            case '+':
                fc = (a*d) + (c*b);
                fb = b*d;
                break;
            case '-':
                fc = (a*d) - (c*b);
                fb = b*d;
                break;
            case '*':
                fc = a*c;
                fb = b*d;
                break;
            case '/':
                fc = (a*d);
                fb = (c*b);
                break;
        }

        cout << fc << '/' << fb << " = ";

        for(int i = min(abs(fc), abs(fb)); i >= 1; i--){
            if(fc % i == 0 && fb % i == 0){
                fc /= i; fb /=i;
                cout << fc << '/' << fb << endl;
                break;
            }
        }

    }

    return 0;
}
