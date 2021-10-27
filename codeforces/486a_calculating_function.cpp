#include <iostream>
using namespace std;

unsigned long long n;
long long out;
unsigned long long zsum;
unsigned long long fsum;
unsigned long long nz;
unsigned long long nf;

int main(){
    cin >> n;
    if (n % 2 == 0){
        nz = ((n - 2) / 2) + 1;
        nf = (((n - 1) - 1) / 2) + 1;
        zsum = ((2 + n) * nz) / 2;
        fsum = ((n - 1 + 1) * nf) / 2;
    }
    if (n % 2 != 0){
        nz = (((n - 1) - 2) / 2) + 1;
        nf = (( n - 1) / 2) + 1;
        zsum = ((2 + n - 1)* nz) / 2;
        fsum = ((1 + n) * nf) / 2;
    }

    //cout << nz << ", " << zsum << ", " << nf << ", " << fsum << '\n';
    out = zsum - fsum;
    cout << out;
    return 0;
}