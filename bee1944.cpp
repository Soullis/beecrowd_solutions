#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, counter = 0; cin >> n;
    stack<char> original, temp(original);
    char a, b, c, d;
    original.push('F'); original.push('A'); original.push('C'); original.push('E'); 
    temp = original; 
    
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        if(a == temp.top()){
            temp.pop();
            if(b == temp.top()){
                temp.pop();
                if(c == temp.top()){
                    temp.pop();
                    if(d == temp.top()){
                        temp.pop();
                        counter++;
                        original = temp;
                        if(original.empty()){
                            original.push('F');
                            original.push('A');
                            original.push('C');
                            original.push('E');
                        }
                    }else{
                        original.push(a); original.push(b); original.push(c); original.push(d);
                    }    
                }else{
                    original.push(a); original.push(b); original.push(c); original.push(d);
                }
            }else{
                original.push(a); original.push(b); original.push(c); original.push(d);
            }
        }else{
            original.push(a); original.push(b); original.push(c); original.push(d);
        }
        temp = original;
    }

    cout << counter << endl;

    return 0;
}
