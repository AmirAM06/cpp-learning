#include <iostream>
using namespace std;

int in;
int main(){
    cin >> in;
    if (in % 2 == 0 && in > 2) cout << "YES";
    else cout << "NO";
}