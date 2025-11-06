#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, b;
    while (cin >> n >> b && (n || b)) {
        vector<int> bolas(b);
        for (int i = 0; i < b; i++) cin >> bolas[i];

        vector<bool> diffs(n + 1, false);

        for (int i = 0; i < b; i++)
            for (int j = 0; j < b; j++) {
                int d = abs(bolas[i] - bolas[j]);
                if (d <= n) diffs[d] = true;
            }

        bool ok = true;
        for (int i = 0; i <= n; i++)
            if (!diffs[i]) ok = false;

        cout << (ok ? "Y\n" : "N\n");
    }
    return 0;
}
