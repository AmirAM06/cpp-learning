#include <bits/stdc++.h>
using namespace std;

int a = 0, b = 1, c = a + b, n, temp;
int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << a << ' ';
        temp = a;
        a = b;
        b = c;
        c = a + b;
    }
}