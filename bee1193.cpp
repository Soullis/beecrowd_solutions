#include <bits/stdc++.h>

using namespace std;

string binToDec(string num){
    int f = 0;
    string fi = "";
    int p = 0;
    for(char c : num){
        f += pow(2, p)*(c-48);
        p++;
    }
    p = 0;
    while(f % 10 == f){
        fi += (char)((f/(int)pow(10, p) % 10) + 48);
        p++;
        f /= 10;
    }
    return fi;
}


int main(){

    int n; cin >> n;
    string num; string code;
    for(int i = 0; i < n; i++){

        cin >> num >> code;
        cout << binToDec(num) << endl;

    }

    return 0;
}
