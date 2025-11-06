#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;

    string num;
    int r;

    for(int j = 0; j < n; j++){
        cin >> num;
        r = 0;
        for(char c : num){

            switch(c){
                case '1':
                    r += 2;
                    break;
                case '2':
                    r += 5;
                    break;
                case '3':
                    r += 5;
                    break;
                case '4':
                    r += 4;
                    break;
                case '5':
                    r += 5;
                    break;
                case '6':
                    r += 6;
                    break;
                case '7':
                    r += 3;
                    break;
                case '8':
                    r += 7;
                    break;
                case '9':
                    r += 6;
                    break;
                case '0':
                    r += 6;
                    break;
            }
        }
        cout << r << " leds" << endl;
    }

    return 0;
}
