#include <bits/stdc++.h>

using namespace std;

bool isDiv4, isDiv100, isDiv15, isDiv400, isDiv55;

bool by4(string s){
    bool isDiv4 = false;

}

int main(){

    string ano;
    bool isLeap, isHuluculu, isBulukulu;
    bool isfirst = true;
    while(cin >> ano){

        isLeap = false; isHuluculu = false; isBulukulu = false;

        string f2 = "" + ano[ano.size() - 2] + ano[ano.size() - 1]; 
        if(f2 == "04") isDiv4 = true;
        if(f2 == "16") isDiv4 = true;
        if(f2 == "20") isDiv4 = true;
        if(f2 == "24") isDiv4 = true;
        if(f2 == "28") isDiv4 = true;
        if(f2 == "32") isDiv4 = true;
        if(f2 == "36") isDiv4 = true;
        if(f2 == "40") isDiv4 = true;
        if(f2 == "44") isDiv4 = true;
        if(f2 == "48") isDiv4 = true;
        if(f2 == "52") isDiv4 = true;
        if(f2 == "56") isDiv4 = true;
        if(f2 == "60") isDiv4 = true;
        if(f2 == "64") isDiv4 = true;
        if(f2 == "68") isDiv4 = true;
        if(f2 == "72") isDiv4 = true;
        if(f2 == "76") isDiv4 = true;
        if(f2 == "80") isDiv4 = true;
        if(f2 == "84") isDiv4 = true;
        if(f2 == "88") isDiv4 = true;
        if(f2 == "92") isDiv4 = true;
        if(f2 == "96") isDiv4 = true;
        if(f2 == "00"){
            isDiv4 = true; isDiv100 = true;
            if("" + ano[ano.size() - 4] + ano[ano.size() - 3])
        }

        if(isLeap) cout << "This is a leap year.\n";
        if(isHuluculu) cout << "This is a huluculu festival year.\n";
        if(isBulukulu) cout << "This is a bulukulu festival year.\n";
        if(!isLeap && !isHuluculu && !isBulukulu) "This is an ordinary year.\n";
        cout << endl;
        
    }

    return 0;
}
