#include <iostream>
using namespace std;

long long crd;
long long plc;
long long stp;

int main(){
    cin >> crd;
    plc = crd;
    stp = 0;
    
    while (plc != 0){
        if (plc >= 5){
            stp += plc / 5;
            plc = plc % 5;
        }
        if (plc >= 4){
            stp += plc / 4;
            plc = plc % 4;
        }
        if (plc >= 3){
            stp += plc / 3;
            plc = plc % 3;
        }
        if (plc >= 2){
            stp += plc / 2;
            plc = plc % 2;
        }
        if (plc >= 1){
            stp += plc / 1;
            plc = plc % 1;
        }

        cout /*<< "stp" */<< stp/* << "\n"*/;
        //cout << "plc" << plc;
        return 0;
    }
}