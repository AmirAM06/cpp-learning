#include <bits/stdc++.h>
using namespace std;


void fib(){
    int a = 0, b = 1, c = a + b, n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << a << ' ';
        a = b;
        b = a - (a - b);
        return a + b;
    }
}
int main(){
    return 0;
}