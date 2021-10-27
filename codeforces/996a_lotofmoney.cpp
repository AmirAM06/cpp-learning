#include <bits/stdc++.h>
using namespace std;

int n, plc;

int main(){
    cin >> n;
    plc = n;
    int stp = 0;
    
    while (plc != 0){
        if (plc >= 100){
            stp += plc / 100;
            plc = plc % 100;
        }
        if (plc >= 20){
            stp += plc / 20;
            plc = plc % 20;
        }
        if (plc >= 10){
            stp += plc / 10;
            plc = plc % 10;
        }
        if (plc >= 5){
            stp += plc / 5;
            plc = plc % 5;
        }
        if (plc >= 1){
            stp += plc / 1;
            plc = plc % 1;
        }
    }
        cout /*<< "stp" */<< stp /*<< "\n"*/;
        //cout << "plc" << plc;
    return 0;
}