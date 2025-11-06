#include <bits/stdc++.h>

using namespace std;

int main() {

    int A, C;

    while (cin >> A >> C && (A != 0 || C != 0)) {
        
        long long total_cuts = 0;
        int previous_height = A;

        for (int i = 0; i < C; ++i) {
            int current_height;
            cin >> current_height;

            if (current_height < previous_height) {
                total_cuts += (long long)(previous_height - current_height);
            }

            previous_height = current_height;
        }

        cout << total_cuts << "\n";
    }

    return 0;
}