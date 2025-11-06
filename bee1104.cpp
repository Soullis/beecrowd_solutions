#include <bits/stdc++.h>

using namespace std;

void point(int i, int s){
    for(int j = 0; j < s; j++){
        if(j == i) cout << "* ";
        else cout << "  ";
    }
    cout << endl;
}

void printVec(vector<int> s){
    for(int i = 0; i < s.size() - 1; i++) cout << s[i] << " ";
    cout << endl;
}

int main(){

    int A, B, counterA, counterB; cin >> A >> B;

    while(A || B){
        counterA = 0, counterB = 0;
        int idxA = 0, idxB = 0;
        vector<int> a(A + 1);
        vector<int> b(B + 1);

        for(int i = 0; i < A; i++)
            cin >> a[i];
        a[A] = INT_MAX;

        for(int i = 0; i < B; i++)
            cin >> b[i];
        b[B] = INT_MAX;


        while(a[idxA] != INT_MAX || b[idxB] != INT_MAX){
            if(a[idxA] < b[idxB]){
                counterA++;
                while(a[idxA] == a[idxA + 1] && a[idxA] != INT_MAX) idxA++;
                idxA++;
            }
            else if(b[idxB] < a[idxA]){
                counterB++;
                while(b[idxB] == b[idxB + 1] && b[idxB] != INT_MAX) idxB++;
                idxB++;
            }
            else{
                while(a[idxA] == a[idxA + 1] && a[idxA] != INT_MAX) idxA++;
                while(b[idxB] == b[idxB + 1] && b[idxB] != INT_MAX) idxB++;
                idxA++;
                idxB++;
            }
        }

        cout << min(counterA, counterB) << endl;

        cin >> A >> B;
    }

    return 0;
}
