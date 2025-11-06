#include <bits/stdc++.h>

using namespace std;

int main(){

    string a, b;
    bool iscarr;
    int carr, aa, bb;
    int e;

    while(cin >> a >> b && (a != "0" || b != "0")){
        iscarr = 0;
        carr = 0;
        int idxA = a.size() - 1, idxB = b.size() - 1;
        for(int i = 0; i < max(a.size(), b.size()); i++){
            aa = a[idxA - i]; bb = b[idxB - i];
            if(idxA - i < 0) aa = '0';
            if(idxB - i < 0) bb = '0';
            e = (aa - '0') + (bb - '0');
            if(e + iscarr >= 10){
                iscarr = 1;
                carr++;
            }
            else iscarr = 0;
        }

        if(carr == 0) cout <<"No";
        else cout << carr;
        cout << " carry operation";
        if(carr == 1 || carr == 0) cout << ".\n";
        else cout <<"s.\n";
    }

    return 0;
}
