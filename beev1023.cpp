#include <bits/stdc++.h>
#include <map> // Include the map header

using namespace std;

int main() {
    int counter = 1;
    int n, tempn, tempc;
    double tn, tc; // Use double for tc and tn to avoid casting later
    bool isfirst = true;

    while (cin >> n && n) {
        if (!isfirst) cout << endl;
        else isfirst = false;

        // Use a map to store {avg_consumption, total_residents}
        map<int, int> consumption_groups;
        tn = 0, tc = 0;

        for (int i = 0; i < n; i++) {
            cin >> tempn >> tempc;
            int avg = tempc / tempn; // Integer division is correct
            
            consumption_groups[avg] += tempn; // Automatically sums residents for the same avg
            
            tn += tempn;
            tc += tempc;
        }

        cout << "Cidade# " << counter << ":\n";
        
        bool first_pair = true;
        // Iterate over the map. It's already sorted by key (avg).
        for (auto const& [avg, residents] : consumption_groups) {
            if (!first_pair) {
                cout << " "; // Print space *before* the element
            }
            cout << residents << "-" << avg;
            first_pair = false;
        }

        // Fix for average calculation: Beecrowd requires truncating the float, not rounding.
        // (floor(100 * (tc / tn)) / 100) handles this.
        double avg_consumo = floor(100 * (tc / tn)) / 100;

        cout << "\nConsumo medio: " << fixed << setprecision(2) << avg_consumo << " m3." << endl;

        counter++;
    }

    return 0;
}