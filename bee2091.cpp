#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    while(cin >> n && n){
        vector<long> nums(n);

        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        long ant;
        int i;
        for(i = 1; i < n; i+=2){
            ant = nums[i - 1];
            if(nums[i]!=ant){
                break;
            }
        }

        if(i >= n) cout << nums[n - 1] << endl;
        else cout << ant << endl;

    }

    return 0;
}
