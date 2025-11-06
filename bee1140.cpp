#include <bits/stdc++.h>

#define MAX 20

using namespace std;

int main(){

    char phrase[MAX];

    while(true){
        scanf("%[^\n]", phrase);
        getchar();
        if(phrase[0] == '*') break;
        char f = phrase[0];
        bool flag = true;

        for(int i = 0; i < MAX; i++){
            if(phrase[i] == '\0') break;
            if(phrase[i] == ' '){
                if(phrase[i + 1] != f && phrase[i + 1] != f + 32 && phrase[i + 1] != f - 32){
                    flag = false;
                }
            }
        }

        if(flag) cout << "Y" << endl;
        else cout << "N" << endl;
    }

    return 0;
}
