#include <iostream>
using namespace std;

unsigned a,b,c;
string vaaz;

int main(){

    cin >> a >> b >> c;
     
    if (a + b + c == 180 && a != 0 && b != 0 && c != 0){
        vaaz = "Yes";
    }
    else{
        vaaz = "No";
    }

    cout << vaaz;

    return 0;
}