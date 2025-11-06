#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, num;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> num;
        cout << num;
        for(int j = 2; j <= (num / 2); j++){
            if(num%j == 0){
                cout << " nao";
            break;
            }
        }
        cout << " eh primo\n";
    }

    return 0;
}
