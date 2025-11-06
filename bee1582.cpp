#include <bits/stdc++.h>

using namespace std;

int gcdn(const vector<int>& numbers) {
        if (numbers.empty()) {
            return 0;
        }

        int result = numbers[0];
        for (size_t i = 1; i < numbers.size(); ++i) {
            result = gcd(result, numbers[i]); 
            
        }
        return result;
    }

int main(){

    vector<int> num(3);
    while(cin >> num[0] >> num[1] >> num [2]){
        cout << "tripla";
        sort(num.begin(), num.end());
        if(num[2]*num[2] == num[0]*num[0] + num[1]*num[1]){
            cout << " pitagorica";
            if(gcdn(num) == 1) cout << " primitiva";
        }
        cout << endl;
    }

    return 0;
}
