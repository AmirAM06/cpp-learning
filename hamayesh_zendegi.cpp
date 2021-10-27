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

    // DEBUGGING cout << s;

    if (s <= 10){
        j = "Right";
    }
    if (s >= 11){
        j = "Left";
    }

    tr = 10 + 1 - r;

    if (j == "Right"){
        ts = s;
    }
    if (j == "Left"){
        ts = 20 + 1 - s;
    }

    cout << j << ' ' << tr << ' ' << ts;

    return 0;
}