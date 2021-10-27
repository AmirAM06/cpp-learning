#include <bits/stdc++.h>
using namespace std;

// r = red, b = blue, combo, OofD = out of date
int r, b, combo, OofD;

int main(){

    cin >> r >> b;

    if (r >= b){
        combo = b;
        OofD = (r - combo) / 2;
    }
    else{
        combo = r;
        OofD = (b - combo) / 2;
    }

    cout << combo << ' ' << OofD;

    return 0;
}