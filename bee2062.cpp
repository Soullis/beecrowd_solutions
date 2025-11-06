#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    string pal;
    for(int i = 0; i < n; i++){
        cin >> pal;
        if(pal.size() == 3){
            if(pal[0] == 'O' && pal[1] == 'B') pal[2] = 'I';
            if(pal[0] == 'U' && pal[1] == 'R') pal[2] = 'I';
        }
        if(i < n -1) cout << pal << " ";
    }
    cout << pal << endl;
    

    return 0;
}
