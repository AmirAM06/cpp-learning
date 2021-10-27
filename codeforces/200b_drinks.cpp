/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

float n, j;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        float temp;
        cin >> temp;
        j += temp * 1.00000;
    }
    cout << j / n;
}