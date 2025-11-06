#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, tempS, counter;
    char tempC;

    while(cin >> n){
        vector<stack<char>> boots(31);
        counter = 0;
        for(int i = 0; i < n; i++){
            cin >> tempS >> tempC;
            if(!boots[tempS - 30].empty()){
                if(boots[tempS - 30].top() != tempC){
                    boots[tempS - 30].pop();
                    counter++;
                }
                else boots[tempS - 30].push(tempC);
            }else boots[tempS - 30].push(tempC);
        }
        cout << counter << endl;
    }

    return 0;
}
