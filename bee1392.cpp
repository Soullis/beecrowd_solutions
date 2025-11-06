#include <bits/stdc++.h>

using namespace std;

int main(){


    int n;
    int a, b, tempa, tempb;
    while(cin >> n && n){
        a = 0;
        b = 0;
        for(int i = 0; i < n; i++){
            cin >> tempa >> tempb;
            if(tempa < tempb) b++;
            else if(tempb < tempa) a++;
        }
        cout << a << " " << b << endl;
    }

    return 0;
}
