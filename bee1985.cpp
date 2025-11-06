#include <bits/stdc++.h>

using namespace std;

int main(){

    int t = 0, n;
    cin >> n;

    int p, num;

    for(int i = 0; i < n; i++){

        cin >> p >> num;

        switch (p)
        {
        case 1001:
            t += 15 * num;
            break;
        
        case 1002:
            t += 25 * num;
            break;
        
        case 1003:
            t += 35 * num;
            break;
        
        case 1004:
            t += 45 * num;
            break;
        
        case 1005:
            t += 55 * num;
            break;
        
        default:
            break;
        }

    }
    float dindin = t;
    cout << fixed << setprecision(2) << dindin /10.0 << endl;

    return 0;
}
