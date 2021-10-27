#include <iostream>
using namespace std;

//x va y mahmoud
int xm, ym;

//x va y raees
int xr, yr;

int main(){

    cin >> xm >> ym >> xr >> yr;

    if (xm == xr){
        cout << "Vertical";
    }
    if (ym == yr){
        cout << "Horizontal";
    }
    if (ym != yr && xm != xr){
        cout << "Try again";
    }
}