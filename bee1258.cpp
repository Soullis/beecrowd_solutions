#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    bool firstCase = true;

    while (cin >> n && n != 0) {
        cin.ignore();

        if (!firstCase) {
            cout << "\n";
        }
        firstCase = false;

        vector<tuple<string, string, char>> shirts;

        for (int i = 0; i < n; ++i) {
            string name, color;
            char size;

            getline(cin, name);
            cin >> color >> size;
            cin.ignore();

            shirts.emplace_back(name, color, size);
        }

        sort(shirts.begin(), shirts.end(), [](const auto& a, const auto& b) {
            const string& color_a = get<1>(a);
            const string& color_b = get<1>(b);
            const char size_a = get<2>(a);
            const char size_b = get<2>(b);
            const string& name_a = get<0>(a);
            const string& name_b = get<0>(b);

            if (color_a != color_b) {
                return color_a < color_b;
            }
            
            if (size_a != size_b) {
                return size_a > size_b;
            }
            
            return name_a < name_b;
        });

        for (const auto& shirt : shirts) {
            cout << get<1>(shirt) << " " << get<2>(shirt) << " " << get<0>(shirt) << "\n";
        }
    }

    return 0;
}