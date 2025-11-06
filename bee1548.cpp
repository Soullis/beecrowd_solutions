#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k, counter; cin >> n;
    vector<int> cp, org;

    for(int i = 0; i < n; i++){
        cin >> k;
        org = vector<int> (k);
        counter = 0;

        for(int j = 0; j < k; j++)
            cin >> org[j];
        
        cp = vector<int> (org);
        sort(cp.begin(), cp.end(), greater());
        for(int j = 0; j < k; j++)
            if(org[j] == cp[j]) counter++;
        cout << counter << endl;
    }

    return 0;
}
