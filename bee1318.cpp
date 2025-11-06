#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m;
    cin >> n >> m;
    while(n || m){
        int t[n];
        for(int i = 0; i < n; i++) t[i] = 0;
        int tt = 0;
        for(int i = 0; i < m; i++){
            int a;
            cin >> a;
            t[a-1]++;
            if(t[a-1] == 2) tt++;
        }
        cout << tt << endl;

        cin >> n >> m;
    }

    return 0;
}
