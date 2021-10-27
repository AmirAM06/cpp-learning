#include <iostream>
using namespace std;

unsigned x, n;
unsigned endx;

int main(){

    cin >> x;
    cin >> n;

    if (n == 0){
        endx = 20;
    }

    if (n == 7){
        endx = x;
    }

    if (n != 0 && n != 7){
        if (n >= x){
            endx = 0;
        }
        else{
        
        endx = x - n;
        }
    }

    cout << endx;

    return 0;
}