#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;
    getchar();

    string word;
    char a;

    for(int i = 0; i < n; i++){

        getline(cin, word);

        for(int i = 0; i < word.size(); i++){
            if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')){
                word[i] += 3;
            }
        }
        reverse(word.begin(), word.end());

        for(int i = word.size() / 2; i < word.size(); i++){
            word[i]--;
        }

        cout << word << endl;
    }


    return 0;
}
