#include <iostream>
using namespace std;

//radif va shomare sandali
int r,s;

//jahat = r,l
string j;

//teedad radifi ke bayad rad kone va teedad sandali;
int tr,ts;

int main(){

    cin >> r >> s;

    if (s <= 10){
        j = "Right";
        ts = s;
    }
    if (s >= 11){
        j = "Left";
        ts = 20 + 1 - s;
    }

    tr = 10 + 1 - r;

    cout << j << ' ' << tr << ' ' << ts;

    return 0;
}