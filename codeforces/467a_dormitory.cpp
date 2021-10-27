/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n, room = 0;

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        int a, b = 0;
        cin >> a >> b;
        room += (b - a >= 2)? 1:0;
    }
    cout << room;
    return 0;
}