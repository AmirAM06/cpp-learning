/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int t, a[10000];

int main(){
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, b;
        cin >> n >> b;
        a[i] = (n % b != 0)? b - n % b: 0;
    }
    for (int i = 0; i < t; i++){
        cout << a[i] << '\n';
    }
    return 0;
}