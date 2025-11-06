#include <bits/stdc++.h>

using namespace std;


int main(){

    int n;
    cin >> n;

    int l, t;
    string s;

    for(int i = 0; i < n; i++){
        t =0;
        cin >> l;
        
        for(int j = 0; j < l; j++){
            cin >> s;
            for(int k = 0; k < s.size(); k++){
                t+=(s[k] - 65) + j + k;
            }
        }

        cout << t << endl;

    }

    return 0;
}
