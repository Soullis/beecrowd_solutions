#include <bits/stdc++.h>

using namespace std;

int main(){

    string r; cin >> r;
    string rr = "";
    int pe = 0;

    for(char c : r){

        if(c == 'a' || c == 'e' ||  c == 'i' || c == 'o' || c == 'u')
            rr += c;
        
    }

    int pd = rr.size() - 1;
    
    while(pe < pd){
        if(rr[pe] == rr[pd]){
            pe++;
            pd--;
        }
        else{
            
            cout << "N\n";
            return 0;
        }
    }
    
    cout << "S\n";

    return 0;
}
