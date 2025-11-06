#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, cmd, pos;
    bool isstack, isqueue, ispqueue;
    
    while(cin >> n){
        isstack = true; isqueue = true; ispqueue = true;
        stack<int> stk;
        queue<int> qee;
        priority_queue<int> pqee;
        for(int i = 0; i < n; i++){
            cin >> cmd >> pos;
            if(cmd == 1){
                stk.push(pos);
                qee.push(pos);
                pqee.push(pos);
            }
            else{
                if(stk.top() == pos){
                    stk.pop();
                } else isstack = false;
                if(qee.front() == pos){
                    qee.pop();
                }else isqueue = false;
                if(!pqee.empty() && pqee.top() == pos){
                    pqee.pop();
                }else ispqueue = false;
            }
        }
        if(isstack + isqueue + ispqueue >= 2) cout << "not sure" << endl;
        else if(isstack) cout << "stack" << endl;
        else if(isqueue) cout << "queue" << endl;
        else if(ispqueue) cout << "priority queue" << endl;
        else cout << "impossible" << endl;
    }

    return 0;
}
