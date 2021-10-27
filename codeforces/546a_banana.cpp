/* In the name of allah */
//Welcome to my castle. Population: 01
//kind of lonely here...

#include <bits/stdc++.h>
using namespace std;

int k, n, w, cost;

int main(){
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++){
        cost += i*k;
    }
    if (n >= cost) cout << 0;
    else cout << cost - n;
    
}