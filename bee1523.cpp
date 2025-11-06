#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, k;
    int c, s;
    bool flag;
    while(cin >> n >> k && (n || k)){
        stack<pair<int, int>> est; // first entrada second saida
        flag = true;
        for(int i = 0; i < n; i++){
            cin >> c >> s;
            while(est.size() > 0 && est.top().second <= c)
                est.pop();
            if(est.size() > 0)
                if(est.top().second < s)
                    flag = false; 
            est.push(make_pair(c, s));
            if(est.size() > k)
                flag = false;
        }
        if(flag) cout << "Sim" << endl;
        else cout << "Nao" << endl;
    }


    return 0;
}
