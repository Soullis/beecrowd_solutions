#include <bits/stdc++.h>

using namespace std;

long int factorial(int n, int k, int i){
    if(n - i*k < 1) return 1;
    return n*factorial(n, k*i, i + 1);
}


int main(){

    int n;
    cin >> n;
    string s;

    for(int i = 0; i < n; i++){
        cin >> s;
        int idx = s.size() - 1;
        int num = 0, k =0, p = 0;

        while(idx >= 0){
            if(s[idx] == '!'){
                k++;
            }
            else{
                num += pow(10, p) * (s[idx] - 48);
                p++;
            }
            idx--;
        }

        long int numnum = factorial(num, k, 0);

        cout << numnum << endl;
    }

    return 0;
}
