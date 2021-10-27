#include <iostream>
using namespace std;

int dama;


int main(){

    cin >> dama;
    if (dama > 100){
        cout << "Steam";
    }
    if (dama < 0){
        cout << "Ice";
    }
    if (dama <= 100 && dama >= 0){
        cout << "Water";
    }

    return 0;
}