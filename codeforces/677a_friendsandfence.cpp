/* In the name of God */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int n, h, w, f[1000 + 16];

int main(){
    cin >> n >> h;
    for (int i = 0; i < n; i++){
        cin >> f[i];
        w = (f[i] > h)? w + 2: w + 1;
    }
    cout << w;
    
}