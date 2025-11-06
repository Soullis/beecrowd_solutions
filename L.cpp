#include <bits/stdc++.h>

using namespace std;

vector<int> primenums(int n){
    vector<int> p;
    for(int i = 2; i < n/2 + 1; i++){
        if(n%i == 0){
            p.emplace_back(i);
        }
    }
    return p;
}


int main(){

    int n;
    cin >> n;

    vector<int> num(n);

    for(int i = 0; i < n; i++){
        cin >> num[i];
    }
    int p;
    cin >> p;
    int a;
    cout << p << endl;
    for(int i = 0; i < p; i++){
        cin >> a;
        vector<int> al = primenums(a);
        vector<int> cp;
        
        for(int j = 0; j < al.size(); i++){
            for(int k = 0; k < num.size(); k++){
                if(num[k] % al[j] != 0){
                    cp.emplace_back();
                }
            }
        }
        cout << pow(2, cp.size()) << endl;
    }

    return 0;
}
