/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int a, b, k;

int main(){
    cin >> a >> b;
    while(a <= b){
        a *= 3;
        b *= 2;
        k++;
    }
    cout << k;
    return 0;
}