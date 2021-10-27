#include <bits/stdc++.h>
using namespace std;

int a = 0, b = 1, n;
int main(){
    cin >> n;
    cout << a << ' ';
    while (n-1){
        cout << b << ' ';
        b += a;
        a = b - a;
        n--;
    }
}