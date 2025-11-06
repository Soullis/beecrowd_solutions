#include<bits/stdc++.h>

using namespace std;
using ll = unsigned long long;

void printBinary(ll n) {
    // Determine the number of bits in a long long
    const int numBits = std::numeric_limits<long long>::digits;

    // Iterate from the most significant bit to the least significant bit
    for (int i = numBits - 1; i >= 0; --i) {
        // Use a bitmask to check if the i-th bit is set
        // (1LL << i) creates a long long with only the i-th bit set
        if ((n >> i) & 1LL) {
            std::cout << "1";
        } else {
            std::cout << "0";
        }
    }
    std::cout << std::endl;
}

int main(){

    int m, mi, n, q, c, x, y, temp, tt;
    int t; cin >> t;
    ll r;
    for(int i = 0; i < t; i++){
        
        cin >> n;
        vector<ll> conjuntos(n);

        for(int j = 0; j < n; j++){
            cin >> m;
            conjuntos[j] = 0;
            for(int k = 0; k < m; k++){
                cin >> temp;
                ll d = 1LL << (temp - 1);
                conjuntos[j] |= 1LL << (temp - 1);
            }
        }

        cin >> q;
        for(int j = 0; j < q; j++){
            tt = 0;
            cin >> c >> x >> y;
            ll xi = conjuntos[x - 1];
            ll yi = conjuntos[y - 1];
            if(c == 1) r = xi & yi;
            else r = xi | yi;
            while(r > 0){
                if(r & 1) tt++;
                r >>= 1LL;
            }
            cout << tt << endl;
        }

    }

    return 0;
}
